#ifndef SENSORS_H
#define SENSORS_H

typedef struct Result {
    int luminosity;
    float temperature;
    int humidity;
    int pressure;
    float gps;
} Result;

void getData(Result *array);

int getLuminosity();
float getTemperature();
int getHumidity();
int getPressure();
float getGPS();
int getDateTime();

#endif //SENSORS_H
