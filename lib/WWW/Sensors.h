#ifndef SENSORS_H
#define SENSORS_H

void getData(int *array);

int getLuminosity();
int getTemperature();
int getHumidity();
int getPressure();
float getGPS();
int getDateTime();

#endif //SENSORS_H
