// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: October 2021
// This program reverses the user's inputted integers

#include <iostream>

int main() {
    // This function reverses the user's inputted integers
    int integer, reversedNumber = 0, remainder;
    std::string user_input;

    // Input
    std::cout << "Enter an integer to be reversed: ";
    std::cin >> user_input;

    // Process and Output
    try {
        integer = std::stoi(user_input);
        while (integer != 0) {
            remainder = integer%10;
            reversedNumber = reversedNumber*10 + remainder;
            integer /= 10;
        }
    std::cout << "\nReversed Number = " << reversedNumber;
    } catch (std::invalid_argument) {
        std::cout << "\nThat was not a valid input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
