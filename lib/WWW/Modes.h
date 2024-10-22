#ifndef MODES_H
#define MODES_H

#define STANDARD_MODE 0
#define ECO_MODE 1
#define MAINTENANCE_MODE 2
#define CONFIGURATION_MODE 3
char CURRENT_MODE = STANDARD_MODE;

unsigned long LAST_LOG_TIME = 0;

#define IDLE_TIME_TO_MAINTENANCE (30 * 60000)
unsigned long LAST_INTERACTION_TIME = 0;

void work(int mode);

void maintenance();

void configuration();

#endif //MODES_H
