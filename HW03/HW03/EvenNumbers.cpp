#include "EvenNumbers.h"
#include <iostream>
#include <cmath>
using namespace std;

//constructor that sets the value of the integer to 0
EvenNumbers::EvenNumbers()
{
	value = 0;
}

//constructor that sets the value of the integer to what the user inputs
EvenNumbers::EvenNumbers(int NewValue)
{
	value = NewValue;
}

//returns the new value of the integer
int EvenNumbers::getValue()
{
	return value;
}

//calculates the next even number
int EvenNumbers::getNext()
{
	int NextEven = 0;

	//if the entered in value is an even number, add two to the number and return as the next even number
	if (value % 2 == 0)
	{
		NextEven = value + 2;
	}
	else
	{
		//if the entered value is not an even number keep adding one to the number until you get an even number
		NextEven = value + 1;
	}
	return NextEven;
}

//calculates the previous even number
int EvenNumbers::getPrevious()
{
	int PrevEven = 0;

	if (value % 2 == 0)
	{
		PrevEven = value - 2;
	}
	else
	{
		PrevEven = value - 1;
	}
	return PrevEven;
}