//----------------------------------------------------------------------
// Pr13-1_app.cpp
// 
// Author: Tony Gaddis
// 
// App code for Program 13-1 on pp. 736-737
//----------------------------------------------------------------------
#include <iostream>

#include "Rectangle.h"

using std::cin;
using std::cout;
using std::endl;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main()
{
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

    // Display the rectangle's data
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
 
    return 0;
}
