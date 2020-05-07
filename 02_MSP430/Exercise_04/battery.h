// A little Program to change the Battery Status

#include "driverlib.h"

#ifndef BATTERY_H_
#define BATTERY_H_


#define noLine      0   // No Batteri
#define aLine       1   // one Battery line
#define twoLine     2   // two Battery line
#define threeLine   3   // three Battery line
#define fourLine    4   // four Battery line
#define fiveLine    5   // five Battery line
#define sixLine     6   // six Battery line


void changeBatteryStatus(char batteryStatus);


#endif // BATTERY_H_
