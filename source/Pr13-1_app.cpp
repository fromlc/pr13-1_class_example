//----------------------------------------------------------------------
// Pr13-1_app.cpp
// 
// Author: Tony Gaddis
// 
// App code for Program 13-1 on pp. 736-737
//----------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>

#include "Rectangle.h"

constexpr int FILE_ERROR = 1;

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// put utility functions in separate namespace
//----------------------------------------------------------------------
namespace f {
	//----------------------------------------------------------------------
	// Display the rectangle's data
	// 
	// use call by value for now
	//----------------------------------------------------------------------
	void displayDimensions(Rectangle r) {
		cout << "Here is the rectangle's data:\n";
		cout << "Width: " << r.getWidth() << endl;
		cout << "Length: " << r.getLength() << endl;
		cout << "Area: " << r.getArea() << endl;
	}
}

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
	string s = "t.txt";
	ifstream ifs;
	ifs.open(s);

	if (!ifs.is_open()) {
		cout << "Error! " << s;
	}

	vector<double> vec;
	vec.reserve(60);

	int i = 0;
	double data = 5;
	for (int i = 0; i < 80; i++) {
		vec.push_back(data);
	}

	ifs.close();

	Rectangle box;     // Define an instance of the Rectangle class
	double rectWidth;  // Local variable for width
	double rectLength; // Local variable for length

	// Get the rectangle's width and length from the user
	cout << "This program will calculate the area of a\n";
	cout << "rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;

	// Store the rectangle's width and length in the box object
	box.setWidth(rectWidth);
	box.setLength(rectLength);

	f::displayDimensions(box);

	return 0;
}
