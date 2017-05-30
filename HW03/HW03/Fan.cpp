#include "Fan.h"
#include <iostream>
using namespace std;

Fan::Fan()
{
	bool on = false;
}

void Fan::TurnOn()
{
	on = true;
	cout << "on." << endl;
}

void Fan::TurnOff()
{
	on = false;
	cout << "off. " << endl;
}

