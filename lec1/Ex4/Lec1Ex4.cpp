/* Lec1Ex4.cpp --- Demonstrates simple use of vector: 
- declaration and initialization
- three ways to iterate through all stored elements
- how to append new elements
- size of vector
- how to update an element in a vector
*/
#include "std_lib_facilities.h"
int main() {
	vector<int> numbers{ -3, 3, 5, 8888 };

	cout << "The numbers are:\n"; // unsigned needed to avoid warning in MS-VS
	for (unsigned int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}

	numbers[0] = -4;
	cout << "\n... after changing its first element:\n";
	unsigned int max = numbers.size();
	for (unsigned int i = 0; i < max; i++) {
		cout << numbers[i] << " ";
	}

	cout << "\n... using the recommended auto and for range:\n";
	for (auto e : numbers) {
		cout << e << " ";
	}
	vector<double> realNumbers{}; // initially empty
	realNumbers.push_back(3.0);
	realNumbers.push_back(pow(3.0, 2.0));
	realNumbers.push_back(sqrt(10.0));
	cout << "\n... vector of doubles, power and square root functions:\n";
	for (auto e : realNumbers) {
		cout << e << " ";
	}

	keep_window_open();
}