#pragma once
class Fan
{
public:
	//members of object
	int speed;
	bool on;
	double radius;

	//constructor for fan
	Fan();

	//function to turn on the fan
	void TurnOn();

	//function to turn off the fan
	void TurnOff();

}; 