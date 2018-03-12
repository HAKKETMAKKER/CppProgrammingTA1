#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "heartrate.h"
#include "trainingsession.h"

using namespace std;

int main(){

    vector<HeartRate> hrVec;
    ifstream hrFile("C:\\Users\\Mathi\\Desktop\\Cplusplus-UNI-Lektier\\ProgrammingTA1\\hrdata.csv");

    if(hrFile.is_open()) cout << "File Opened" << endl;
    else cout << "File did not open" << endl;

    string timeHours, timeMinutes, timeSeconds, hr, cadence, temperature;

    while(hrFile.good()){

        getline(hrFile, timeHours, ':');
        getline(hrFile, timeMinutes, ':');
        getline(hrFile, timeSeconds, ',');
        getline(hrFile, hr, ',');
        getline(hrFile, cadence, ',');
        getline(hrFile, temperature, '\n');

        HeartRate newHeartRate(hr, timeHours, timeMinutes, timeSeconds, cadence, temperature);
        hrVec.push_back(newHeartRate);


    /*  cout << "amount of hours: " <<timeHours<< endl;
        cout << "amount of minutes: " <<timeMinutes<< endl;
        cout << "amount of seconds: " << timeSeconds<< endl;
        cout << "heartrate: " << hr << endl;
        cout << "cadence: " << cadence << endl;
        cout << "temperature: " << temperature << endl;
    */
    }

    hrFile.close();


    for (unsigned int i = 0; i < 100; i++){
        cout << "The heartrate: " << hrVec[i].getHeartRate() << endl;
        cout << "Time in hours: " << hrVec[i].getTimeHours()<< endl;
        cout << "Time in minutes: " << hrVec[i].getTimeMinutes() << endl;
        cout << "Time in seconds: " << hrVec[i].getTimeSeconds() << endl;
  }


return 0;
}
