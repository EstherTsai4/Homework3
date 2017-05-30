#pragma once
class QuadraticEquation
{
private:
	//data fields for object
	double a;
	double b;
	double c;

public:

	//constructor for a, b, and c (no argument)
	QuadraticEquation();

	//constructor to get a, b and c
	QuadraticEquation(double, double, double);
	
	//get the values of a, b, and c
	double getA();
	double getB();
	double getC();

	//set new values of a, b, and c
	void setABC(double, double, double);

	//calculate and return discriminant
	double getDiscriminant();

	//calculate and return the first root
	double getRoot1();

	//calculate and return the second root
	double getRoot2();

	//display how many roots there are
	void DisplayRoots();

};