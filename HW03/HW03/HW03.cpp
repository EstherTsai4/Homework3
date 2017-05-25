#include <iostream>

using namespace std;

//Exercise 9.2: Fan Class
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

};

//Exercise 9.6: Quadratic Equations Class
class QuadraticEquation
{
public:
	//data fields for object
	double a;
	double b;
	double c;

	//constructor for a, b, and c (no argument)
	QuadraticEquation()
	{
		a = 1.0;
		b = 1.0;
		c = 1.0;
	}

	//return the new a, b, and c value
	double getvaluea()
	{
		double NewA = 0;
		cout << "Enter in the value of a: ";
		cin >> NewA;
		return NewA;
	}
	double getvalueb()
	{
		double NewB = 0;
		cout << "Enter in the value of b: ";
		cin >> NewB;
		return NewB;
	}
	double getvaluec()
	{
		double NewC = 0;
		cout << "Enter in the value of c: ";
		cin >> NewC;
		return NewC;
	}

	//constructor for a, b, and c (with argument)
	QuadraticEquation(double NewA, double NewB, double NewC)
	{
		a = NewA;
		b = NewB;
		c = NewC;
	}

	//calculate and return discriminant
	double getDiscriminant(double a, double b, double c)
	{
		double discriminant = 0;
		discriminant = (b*b) - (4 * a*c);

		return discriminant;
	}

	//calculate and return the first root
	double getRoot1(double discriminant, double a, double b)
	{
		double root1 = 0;
		if (discriminant >= 0)
		{
			root1 = (-b + sqrt(discriminant)) / (2 * a);
		}
		else
		{
			root1 = 0;
		}
		return root1;
	}

	//calculate and return the second root
	double getRoot2(double discriminant, double a, double b)
	{
		double root2 = 0;
		if (discriminant >= 0)
		{
			root2 = (-b - sqrt(discriminant)) / (2 * a);
		}
		else
		{
			root2 = 0;
		}
		return root2;
	}

	void DisplayRoots(double root1, double root2)
	{

		if (root1 != 0 && root2 == 0)
		{
			cout << "The equation only has one root: "<< root1 << endl;
		}
		else if (root2 != 0 && root2 == 0)
		{
			cout << "The equation only has one root: "<< root2 << endl;
		}
		else if (root1 == 0 && root2 == 0)
		{
			cout << "The equation has no real roots." << endl;
		}
		else if (root1 != 0 && root2 != 0)
		{
			cout << "The equation has two roots: " << root1 << " and " << root2 << endl;
		}
	}

};

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


	return 0;
}