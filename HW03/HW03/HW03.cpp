#include <iostream>
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumbers.h"
#include "SortingString.h"
#include "MyInteger.h"

using namespace std;


int main()
{
	//Exercise 9.2
	//create two Fan objects
	Fan fan1, fan2;

	//set the fan1's characteristics
	fan1.speed = 3;
	fan1.radius = 10;

	//display fan1's properties
	cout << "Fan one has a speed of " << fan1.speed << " and a radius of " << fan1.radius << " and it is is ";
	fan1.TurnOn();

	//set the fan2's characteristics
	fan2.speed = 2;
	fan2.radius = 5;

	//display fan2's properties
	cout << "Fan two has a speed of " << fan2.speed << " and a radius of " << fan2.radius << " and it is ";
	fan2.TurnOff();

	//Exercise 9.6
	//ask user to input a, b, and c
	QuadraticEquation Equation1;
	double NewA;
	double NewB;
	double NewC;

	cout << "Enter in value for a: ";
	cin >> NewA;
	cout << "Enter in value for b: ";
	cin >> NewB;
	cout << "Enter in value for c: ";
	cin >> NewC;

	//set values of a, b, and c
	Equation1.setABC(NewA, NewB, NewC);

	//Call funtion to calculate discriminant
	cout << "Your discriminant is: " << Equation1.getDiscriminant() << endl;

	//Call function to calculate the two roots
	Equation1.getRoot1();
	Equation1.getRoot2();

	//call function to display the roots
	Equation1.DisplayRoots();

	//Exercise 9.11: Even Numbers
	int newValue = 0;
	cout << "Enter in a value: ";
	cin >> newValue;
	EvenNumbers Value1(newValue);

	cout << "You entered in: " << Value1.getValue() << endl;

	cout << "The previous even number is: " << Value1.getPrevious() << endl;
	cout << "The next even number is: " << Value1.getNext() << endl;

	//Exercise 10.4
	string s;
	cout << "Enter a string s: ";
	cin >> s;
	cout << "The sorted string is: " << sort(s) << endl;

	//Exercise 10.10
	//ask user to enter in a value
	int value;

	cout << "Enter in a value: ";
	cin >> value;
	MyInteger value1(value);

	//return entered value
	cout << "You entered: " << value1.getValue() << endl;

	//return if value is even or odd or prime using const functions
	if (value1.isEven() == true)
	{
		cout << "The value is even." << endl;
	}
	if (value1.isOdd() == true)
	{
		cout << "The value is odd." << endl;
	}
	if (value1.isPrime() == true)
	{
		cout << "The value is prime." << endl;
	}

	//ask user for new value
	int Newvalue;
	cout << "Enter in another value: ";
	cin >> Newvalue;

	//see if new value is even, odd, or prime
	if (value1.isEven(Newvalue) == true)
	{
		cout << "The new value is even." << endl;
	}
	if (value1.isOdd(Newvalue) == true)
	{
		cout << "The new value is odd." << endl;
	}
	if (value1.isPrime(Newvalue) == true)
	{
		cout << "The new value is prime." << endl;
	}
	
	//see if the object is even, odd, or prime
	if (value1.isEven(value1) == true)
	{
		cout << "The object is even." << endl;
	}
	if (value1.isOdd(value1) == true)
	{
		cout << "The object is odd." << endl;
	}
	if (value1.isPrime(value1) == true)
	{
		cout << "The object is prime." << endl;
	}

	//see if the object is equal to the new entered value
	if (value1.equals(Newvalue) == true)
	{
		cout << "The object is equal to the new entered value." << endl;
	}
	else
	{
		cout << "The object is not equal to the new entered value." << endl;
	}

	//see if the object is equal to the first entered value
	if (value1.equals(value1) == true)
	{
		cout << "The object is equal to the first entered value." << endl;
	}
	else
	{
		cout << "The object is not equal to the first entered value." << endl;
	}
	//ask user to enter in a string
	string word;
	cout << "Enter in a string: ";
	cin >> word;

	//change string to integer value
	cout << "The integer value of the string is: " << value1.parseInt(word) << endl;

	return 0;
}