#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>
using namespace std;

QuadraticEquation::QuadraticEquation()
{
	a = 1.0;
	b = 1.0;
	c = 1.0;
}

QuadraticEquation::QuadraticEquation(double NewA, double NewB, double NewC)
{
	a = NewA;
	b = NewB;
	c = NewC;
}

double QuadraticEquation::getA()
{
	return a;
}

double QuadraticEquation::getB()
{
	return b;
}

double QuadraticEquation::getC()
{
	return c;
}

void QuadraticEquation::setABC(double NewA, double NewB, double NewC)
{
	a = NewA;
	b = NewB;
	c = NewC;
}

double QuadraticEquation::getDiscriminant()
{
	double discriminant = 0;
	//calculate the discriminant
	discriminant = (b*b) - (4 * a*c);

	return discriminant;
}

double QuadraticEquation::getRoot1()
{
	double root1 = 0;
	double discriminant = getDiscriminant();
	if (discriminant < 0)
	{
		return root1;
	}
	else
	{
		root1 = (-b + sqrt(discriminant)) / 2 * a;
		return root1;
	}
}

double QuadraticEquation::getRoot2()
{
	double root2 = 0;
	double discriminant = getDiscriminant();
	if (discriminant < 0)
	{
		return root2;
	}
	else
	{
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		return root2;
	}
}

void QuadraticEquation::DisplayRoots()
{
	double root1 = getRoot1();
	double root2 = getRoot2();

	if (root1 == 0 && root2 == 0)
	{
		cout << "This equation has no real roots." << endl;
	}
	else if (root1 == root2)
	{
		cout << "This equation has one root: " << root1 << endl;
	}
	else 
	{
		cout << "This equation has two roots: " << root1 << " and " << root2 << endl;
	}
}
