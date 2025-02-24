#include<iostream>
using namespace std;


void main()
{
	//Ctrl + D - dublicate
	//Ctrl + Alt + L - open folders
	cout << "Hello world";
	//cout << 'Hello world';
	// \n
	// \t
	// \\
	// \'
	// \"
	cout << "Hello world\n"<<"Hello"<<
		"kjdkjsdhjkdsg"<<"dskhskdhgksd";
		
	cout << "\tHello world\n";
	cout << "\t\tHello world\n";
	cout << "\"Hello world\"\n";
	cout << "\\Hello world\\\n";
	cout << "/Hello  world/\n";
	cout << "\'Hello world\'\n";


	/*
	    1. Числові.
		2. Символьні.
		3. Логічні.
	*/

	int age = 10;
	cout << age << "\n";
	cout << "age = " << age << "\n";
    age = 125;
	cout << "age = " << age << "\n";
	int Age = 18;
	int AgeOfHuman = 25;
	cout << "Age Of Human" << AgeOfHuman << endl;
	int age_of_human = 33;
	int AGE = 100;

	int a1 = 15;
	float a2 = 23.33;
	const double pi = 3.14;
	//int 3a = 28; error
	cout << "Pi = " << pi << endl;
	/*pi = 5.879874654654; - error
	cout << "Pi = " << pi << endl;*/
	///int float = 5.33;

	// a
	int number;
	//cout << "Number = " << number << endl;
	cout << "Enter number : ";
	cin >> number;
	//number = 55;
	cout << "Number = " << number << endl;


	float discount = 0.05;
	float cost = 24.99;
	cout << "Enter cost : ";
	cin >> cost;
	int count = 5;
	cout << "Enter count : ";
	cin >> count;

	float price;

	price = cost * count - cost * discount * count;
	cout << "You have to pay : " << price << " grn";



















}
