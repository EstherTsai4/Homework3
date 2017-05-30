#include "SortingString.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string sort(string& s)
{
	//create a temporary string to input arranged string
	string temp;

	//loop through each letter from smallest to greatest and find it in the string then place it in position 1 of the temp string
	char ch = 'a';
	while (ch <= 'z')
	{
		int currentPosition = 1;
		int count = 0;
		while (currentPosition < s.length())
		{
			int index = s.find(ch, currentPosition);
			if (index == string::npos)
			{
				currentPosition = s.length();
			}
			else
			{
				temp.append(1, ch);
				currentPosition = index + 1;
			}
		}
		ch++;
	}

	//assign the temporary string to the s string
s.assign(temp);

	return s;
}