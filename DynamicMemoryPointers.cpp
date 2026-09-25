//============================================================================
// Name        : DynamicMemoryPointers.cpp
// Author      : Ari Fakhri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Variables to store the three integer values
	int value1;
	int value2;
	int value3;

	//Ask the user for three integers
	cout << "Enter the first integer: ";
	cin >> value1;

	cout << "Enter the second integer: ";
	cin >> value2;

	cout << "Enter the third integer: ";
	cin >> value3;

	//Create integer pointers using dynamic memory
	int* pointer1 = new int;
	int* pointer2 = new int;
	int* pointer3 = new int;

	//Store the values in the allocated memory
	*pointer1 = value1;
	*pointer2 = value2;
	*pointer3 = value3;

	//Display the variables
	cout << "\nValues stored in variables:" << endl;
	cout << "value1: " << value1 << endl;
	cout << "value2: " << value2 << endl;
	cout << "value3: " << value3 << endl;

	//Display values stored through pointers
	cout << "\nValues stored through pointers:" << endl;
	cout << "*pointer1: " << *pointer1 << endl;
	cout << "*pointer2: " << *pointer2 << endl;
	cout << "*pointer3: " << *pointer3 << endl;

	//Display the memory addresses
	cout << "\nMemory addresses:" << endl;
	cout << "pointer1: " << pointer1 << endl;
	cout << "pointer2: " << pointer2 << endl;
	cout << "pointer3: " << pointer3 << endl;

	//Free the dynamically allocated memory
	delete pointer1;
	delete pointer2;
	delete pointer3;

	return 0;


}
