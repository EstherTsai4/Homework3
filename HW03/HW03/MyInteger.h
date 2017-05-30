#pragma once
#include <string>
using namespace std;

class MyInteger
{
private:
	int value;

public:
	//creates MyInteger object with specified integer value
	MyInteger(int Newvalue);
	
	//retrieves the integer value
	int getValue() const;

	//tests 
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;

	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);

	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);

	bool equals(int) const;
	bool equals(const MyInteger&) const;

	static int parseInt(const string&);

};