#include "heartrate.h"
#include "trainingsession.h"
#include <fstream>
#include <iostream>

using namespace std;

HeartRate::HeartRate(){
}
/*Constructor to create "HeartRate" objects,
that show the heartrate at a specific time */
HeartRate::HeartRate(string hr, string timeHours, string timeMinutes, string timeSeconds, string cadence, string temperature){
    _hr = hr;
    _timeHours = timeHours;
    _timeMinutes = timeMinutes;
    _timeSeconds = timeSeconds;
    _cadence = cadence;
    _temperature = temperature;

}

//sets the heartrate on an object of heartrate
void HeartRate::setHeartRate(int hr){
    _hr = hr;
}

//sets the time on an object of heartrate
/*void HeartRate::setTime(int time){
    _time = time;
}*/

//Return the heartrate at a specific time
//Gøres igennem brug af vector?
string HeartRate::getHeartRate(){
return _hr;
}

//Return the time of a specific heartrate
//Gøres igennem brug af vector?
string HeartRate::getTimeHours(){
    return _timeHours;
}

string HeartRate::getTimeMinutes(){
    return _timeMinutes;
}

string HeartRate::getTimeSeconds(){
    return _timeSeconds;
}
