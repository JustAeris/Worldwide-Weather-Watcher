#ifndef MODES_H
#define MODES_H

#define STANDARD_MODE 0
#define ECO_MODE 1
#define MAINTENANCE_MODE 2
#define CONFIGURATION_MODE 3
extern char CURRENT_MODE;


#define IDLE_TIME_TO_MAINTENANCE (30 * 60000)

void work(int mode);

void maintenance();

void configuration();

#endif //MODES_H
