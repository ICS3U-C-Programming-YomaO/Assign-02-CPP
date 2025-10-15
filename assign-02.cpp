// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : October 2025
// This program calculates pyramid surface area and volume

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // declare variables
    double length, width, height;
    double volume, surfaceArea;
    double slantHeightLength, slantHeightWidth;
    std::string unit;

    // ask user for unit and dimension
    std::cout << "Welcome! This program calculates the volume"
    << "and surface area of a pyramid." << std::endl;

    std::cout << "Enter the unit of measurement (e.g., cm, m, in): ";
    std::cin >> unit;

    std::cout << "Enter the length (" << unit << "): ";
    std::cin >> length;

    std::cout << "Enter the width (" << unit << "): ";
    std::cin >> width;

    std::cout << "Enter the height (" << unit << "): ";
    std::cin >> height;

    // calculate volume
    volume = (length * width * height) / 3;

    // calculate slant heights
    slantHeightLength = sqrt(pow(width / 2, 2) + pow(height, 2));
    slantHeightWidth = sqrt(pow(length / 2, 2) + pow(height, 2));

    // calculate surface area
    surfaceArea = (length * width) +
    (length * slantHeightLength) + (width * slantHeightWidth);

    // display if statement
    if (volume >= 2500) {
        std::cout << "That could be the same size"
        << "as the Pyramid of Giza!" << std::endl;
    }

    if (surfaceArea >= 2500) {
        std::cout << "That's huge!" << std::endl;
    }

    // display results rounded to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Volume of the pyramid = " << volume << " "
    << unit << "^3" << std::endl;
    std::cout << "Surface area of the pyramid = " << surfaceArea << " "
    << unit << "^2" << std::endl;
}
