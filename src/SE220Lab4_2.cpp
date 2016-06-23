//============================================================================
// Name        : SE220Lab4_2.cpp
// Author      : Joshua Galbraith
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	cout << left << setw(15) << 40000 << endl; // 13.6(a)

	char state [80];  cin >> state;//13.6(b)

	cout << showpos << 200 << "\n" << noshowpos << 200 << endl; // 13.6 (c)

	cout << showbase << hex << 100 << endl;//13.6(d)

	char charArray[10];
	char delimiter;
	int arrayPos = 0;
	cout << "Enter up to 10 characters if 'p' is entered all values after "
			"will be dismissed including 'p'" << endl;
	while ( arrayPos <= 9)
	{
		if(cin.peek() == 'p')
		{
			arrayPos = 11;
		}
		if (cin.peek() == cin.eof())
		{
			arrayPos = 11;
		}
		else
		{
			charArray[arrayPos] = cin.get();
			arrayPos++;
		}
	}
	cout.write(charArray, arrayPos) << endl;
	//13.6(e)

	cout << setfill('0') << right << setw(9) << 1.234 << endl; // 13.6(f)


	double number = 100.453627; //13.10
	cout << fixed;
	cout.precision(0);
	cout << number << endl;
	cout.precision(1);
	cout << number<< endl;
	cout.precision(2);
	cout << number<< endl;
	cout.precision(3);
	cout << number<< endl;
	cout.precision(4);
	cout << number<< endl;


	for(int flc = 33; flc <=126; flc++)
	{
		cout << dec << "ASCII value of " << (char)flc << " is the decimal value " << flc << endl;
		cout << oct << "ASCII value of " << (char) flc << " is the octal value " << flc << endl;
		cout << hex << "ASCII value of " <<(char) flc << " is the hexadecimal value" << flc << endl;
	}
}
