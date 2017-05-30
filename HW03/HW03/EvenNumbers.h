#pragma once
class EvenNumbers
{
private:
	int value;

public: 

	//constructor no argument
	EvenNumbers();

	//constructor with argument
	EvenNumbers(int);

	//function to return value of object
	int getValue();

	//function to return the next even number after current even number
	int getNext();

	//function to get previous even number before current even number
	int getPrevious();

};