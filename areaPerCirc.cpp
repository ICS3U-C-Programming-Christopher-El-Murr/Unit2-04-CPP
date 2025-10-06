// Copyright (c) 2025 Christopher El-Murr All rights reserved
// Created by Christopher El-Murr
// Date:September 27 2025
// This program asks the user for the radius and then
// displays the circumference and area of a circle with pi
#include <cmath>
#include <iostream>

int main() {
//declare the variables radius,area, and circumference
int radius;
int area;
int circumference;
// Ask the user fo the radius
std::cout << "Enter the radius of the circle: ";
std::cin >> radius;

// calculate the area with pi from cmath
area = M_PI * radius * radius;

// Calculate the circumference with pi from cmath
circumference = 2 * M_PI * radius;

// display the area and circumference of the circle
std::cout << "Area of the circle: " << area << std::endl;
std::cout << "Circumference of the circle: " << circumference << std::endl;
}
