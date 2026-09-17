//============================================================================
// Name        : StringConcatenation.cpp
// Author      : Arianna Fakhri
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstString;
	string secondString;

	cout << "String Concatenation Program" << endl;
	cout << "============================" << endl;

	//Test 1
	cout << "\nTest 1" << endl;
	cout << "Enter the first string: ";
	getline(cin, firstString);

	cout << "Enter the second string: ";
	getline(cin, secondString);

	cout << "Result: " << firstString + " " + secondString << endl;

	//Test 2
	cout << "\nTest 2" << endl;
	cout << "Enter the first string: ";
	getline(cin, firstString);

	cout << "Enter the second string: ";
	getline(cin, secondString);

	cout << "Result: " << firstString + " " + secondString << endl;

	//Test 3
	cout << "\nTest 3" << endl;
	cout << "Enter the first string: ";
	getline(cin, firstString);

	cout << "Enter the second string: ";
	getline(cin, secondString);

	cout << "Result: " << firstString + " " + secondString << endl;

	return 0;
}
