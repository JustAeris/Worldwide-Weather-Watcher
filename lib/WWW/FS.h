#ifndef FS_H
#define FS_H
#include <Arduino.h>
#include <Sensors.h>

#define SEPARATOR ','

void saveMeasures(Result* array);

void writeData(String* array, String* fileName, String* directory);
void archiveData();

#endif //FS_H
