#include "trainingsession.h"
#include "heartrate.h"
#include <fstream>
#include <iostream>

using namespace std;

TrainingSession::TrainingSession(){
}

//TrainingSession constructor with arguments
TrainingSession::TrainingSession(int age, double weight, double vo2max){
    _age = age;
    _weight = weight;
    _vo2max = vo2max;
}

//Open a file with data,
//Insert data into member variables time and hr
//close the file.
void TrainingSession::readData(std::string filename){
}

/*Function to calculate amount of calories burnt
after subtracting the basal stofskifte,
2000 calories a day for Preben*/
double TrainingSession::calcCalorieBurnNet(){
}

/*Function to calculate the amount of calories burnt*/
double TrainingSession::calcCalorieBurnGross(){
}

//Function to calculate the BMR of the TrainingSession
double TrainingSession::calcBMR(){
}

//Function that returns the total amount of time passed
double TrainingSession::totalTime(){
}

