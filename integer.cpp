// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program tells you if a number is positive, negative, or equal to 0

#include <iostream>

int main() {
    // This function tells you if a number is positive, negative, or equal to 0

    // variables
    int integer;

    // Input
    std::cout << "Enter a number (integer): " << std::endl;
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process
    if (integer > 0) {
        std::cout << "Your integer is positive" << std::endl;
    } else if (integer < 0) {
          std::cout << "Your integer is negative" << std::endl;
    } else if (integer == 0) {
          std::cout << "Your integer is 0" << std::endl;
    } else {
          std::cout << "Error, unable to identify integer" << std::endl;
    }
}
