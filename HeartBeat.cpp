// Includes commands.h and WProgram.h in the program. 
// Not sure why Arduino.h is commented out
#include <commands.h>
//#include <Arduino.h>
#include <WProgram.h>

// Declares global variables HardwareSerial and *GPS
extern HardwareSerial *hardSerial;
extern *GPS;

// Initiates function HeartBeat() and doesn't return
// a value.
void HeartBeat(char* args_){


// Arduino.h isn't included, so I'm not sure why this
// serial.println is here.
Serial.println(getPositionString(gpsData));



}
