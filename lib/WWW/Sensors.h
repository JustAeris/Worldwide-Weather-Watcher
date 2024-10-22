#ifndef SENSORS_H
#define SENSORS_H

typedef struct Coords {
    float latitude;
    float longitude;
} Coords;

typedef struct Result {
    int luminosity;
    float temperature;
    int humidity;
    int pressure;
    Coords gps;
} Result;

void getData(Result *array);

int getLuminosity();
float getTemperature();
int getHumidity();
int getPressure();
Coords getGPS(char ecoMode);
int getDateTime();

#endif //SENSORS_H
