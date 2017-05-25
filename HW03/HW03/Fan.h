class Fan
{
public:
	//members of object
	int speed;
	bool on;
	double radius;

	Fan()
	{
		//keeps fan off
		bool on = false;
	}

	//function to turn on the fan
	void TurnOn()
	{
		on = true;
		cout << "on. " << endl;

	}

	void TurnOff()
	{
		on = false;
		cout << "off. " << endl;
	}

}; #pragma once
