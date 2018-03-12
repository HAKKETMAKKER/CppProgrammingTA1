#ifndef HEARTRATE_H
#define HEARTRATE_H
#include <string>

class HeartRate
{
public:
    HeartRate();
    HeartRate(std::string hr, std::string timeHours, std::string timeMinutes, std::string timeSeconds, std::string cadence, std::string temperature);

    void setHeartRate(int hr);
    void setTime(int time);

    std::string getHeartRate();
    std::string getTimeHours();
    std::string getTimeMinutes();
    std::string getTimeSeconds();

private:
    std::string _hr;
    std::string _timeHours;
    std::string _timeMinutes;
    std::string _timeSeconds;
    std::string _cadence;
    std::string _temperature;
};

#endif // HEARTRATE_H
