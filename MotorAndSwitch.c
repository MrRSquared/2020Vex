#pragma config(Sensor, dgtl2,  button,         sensorTouch)
#pragma config(Motor,  port2,           leftMotor,     tmotorVex393_MC29, openLoop) //
//*!!Code automatically generated by 'ROBOTC' configuration wizard  !!*//

task main(){
	while(true){// <---The While(true) statement is a convention for creating a forever loop. While 1=1 is just a s good here.
		if (SensorValue[button]==1){// This looks for a button press. If it finds it, do something...
			motor[leftMotor]=50;
			}else{ //...Otherwise, do something else.
			//motor[leftMotor]=vexRT[Ch2]; //uncommenting this line should enable the joystick, but I do not have batteries to test it.

		}

	}
}
