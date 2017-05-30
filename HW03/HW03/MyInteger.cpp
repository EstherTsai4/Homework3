#include "MyInteger.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

MyInteger::MyInteger(int Newvalue)
{
	value = Newvalue;
}

int MyInteger::getValue() const
{
	return value;
}

bool MyInteger::isEven() const
{
	if (value % 2 == 0)
	{
		return true;
	}
	return false;
}

bool MyInteger::isOdd() const
{
	if (value % 2 != 0)
	{
		return true;
	}
	return false;
}

bool MyInteger::isPrime() const
{
	for (int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool MyInteger::isEven(int Newvalue) 
{
	if (Newvalue % 2 == 0)
	{
		return true;
	}
		return false;
}

bool MyInteger::isOdd(int Newvalue)
{
	if (Newvalue % 2 != 0)
	{
		return true;
	}
	return false;
}

bool MyInteger::isPrime(int Newvalue)
{
	for (int i = 2; i <= Newvalue / 2; i++)
	{
		if (Newvalue % i == 0)
		{
			return false;
		}
	}

	return true;
}

bool MyInteger::isEven(const MyInteger& Newvalue)
{
	return Newvalue.isEven();
}

bool MyInteger::isOdd(const MyInteger& Newvalue)
{
	return Newvalue.isOdd();
}

bool MyInteger::isPrime(const MyInteger& Newvalue)
{
	return Newvalue.isPrime();
}

bool MyInteger::equals(int Newvalue) const
{
	if (Newvalue == value)
	{
		return true;
	}
	return false;
}

bool MyInteger::equals(const MyInteger& Newvalue) const
{
	if (value == Newvalue.getValue())
	{
		return true;
	}
	return false;
}

int MyInteger::parseInt(const string& s) 
{
	//get each character in string and convert to integer then add it to the sum to get the integer number of the string
	int NumValue = 0;
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		sum += static_cast<int>(s.at(i));
	}
	return sum;
}