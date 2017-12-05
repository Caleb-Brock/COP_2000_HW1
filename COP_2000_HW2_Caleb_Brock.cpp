//Caleb Brock, 9/19/2017, COP2000_HW_2, The calculation of the area of three different types of rooms
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x, length, width, pi, radius;
	double Square_Room_Area, Rectangular_Room_Area, Round_Room_Area;
	//Menu
    cout << "Haverly's Room Calculator:" << endl;
	cout << "************************" << endl << endl;
	cout << "1. Square Room" << endl;
	cout << "2. Rectangular Room" << endl;
	cout << "3. Round Room" << endl;
	cout << "4. Quit" << endl << endl;
	cout << "Please enter a menu item (1-4) >" << endl;
	cin >> x;
	if (x == 1)//Square Room Calculation
	{
		cout << "What is the width of the room >" << endl;
		cin >> width;
		if (width > 0)
		{
	    Square_Room_Area = width * 2;
		cout << setprecision(2) << fixed;
		cout << "The area of the square room is " << Square_Room_Area << " sq/ft." << endl;
		cin.get();
		return 0;
	    }
		else
		cout << "invalid number entered...Exiting Program..." << endl;
		cin.get();
		return 0;
    }
	if (x == 2)//Rectangular Room Calculation
	{
		cout << "What is the width of the room >" << endl;
		cin >> width;
		cout << "What is the length of the room >" << endl;
		cin >> length;
		if ((length > 0) & (width > 0))
		{
		Rectangular_Room_Area = width * length;
		cout << setprecision(2) << fixed;
		cout << "The area of the rectangular room is " << Rectangular_Room_Area << " sq/ft." << endl;
		cin.get();
	    return 0;
		}
	    else
		cout << "invalid number entered...Exiting Program..." << endl;
		cin.get();
		return 0;
    }
    if (x == 3)//Round Room Calculation
    {
		cout << "What is the radius of the room >" << endl;
		cin >> radius;
		if (radius > 0)
		{
		pi = 3.1415;
		Round_Room_Area = pi * (radius * radius);
		cout << setprecision(2) << fixed;
		cout << "The area of the round room is " << Round_Room_Area << " sq/ft." << endl;
		cin.get();
		return 0;
		}
		else
		cout << "invalid number entered...Exiting Program..." << endl;
		cin.get();
		return 0;
    }
	if (x == 4)//Exit program option
	{
		cout << "Thank you for using Haverly’s Room Calculator…" << endl;
		cout << "Press enter to exit program..." << endl;
		cin.get();
		return 0;
    }
	else//Invalid input
		cout << x << " is an invalid menu item…Exiting Program...";
		cin.get();
	return 0;
}