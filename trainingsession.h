#ifndef TRAININGSESSION_H
#define TRAININGSESSION_H
#include <vector>
#include <string>
#include "heartrate.h"

class TrainingSession
{
public:
    TrainingSession();
    TrainingSession(int age, double weight, double vo2max);
    void readData(std::string filename);

    double calcCalorieBurnNet();
    double calcCalorieBurnGross();
    double calcBMR();

    double totalTime();

private:
    std::vector<HeartRate> _hr;
    std::string _filename;
    int _age;
    int _time;
    double _weight;
    double _vo2max;


};

#endif // TRAININGSESSION_H
