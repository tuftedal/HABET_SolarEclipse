#include <commands.h>
//#include <Arduino.h>
#include <WProgram.h>
#include <string.h>
// The main serial interface
extern HardwareSerial *hardSerial;
extern Servo pitch;
extern Servo roll;
extern Servo yaw;

void GimbalMove(char* arg_){

	//parse the chars here
	//need to seperate into 3 integers
	//verify that they are all integers 
	char* val1;
	char* val2;
	char* val3;
	int* pitchdeg;
	int* rolldeg; 
	int* yawdeg;
	
	val1=strtok(arg_,",");
	val2=strtok(NULL,",");
	val3=strtok(NULL,",");
	pitchdeg = atoi(val1);
	rolldeg = atoi(val2);
	yawdeg = atoi(val3);

	if(val1==NULL){
		return;
	}
	if(val2==NULL){
		return;
	}
	if(val3==NULL){
		return;
	}

	pitch.write(ptichdeg);
	roll.write(rolldeg);
	yaw.write(yawdeg);
		

	
}

	
