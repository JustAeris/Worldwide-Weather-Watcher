#ifndef SENSORS_H
#define SENSORS_H

typedef struct Result {
    int luminosity;
    int temperature;
    int humidity;
    int pressure;
    float gps;
    int date_time;
} Result;

void getData(Result *array);

int getLuminosity();
int getTemperature();
int getHumidity();
int getPressure();
float getGPS();
int getDateTime();

#endif //SENSORS_H
