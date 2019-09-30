// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the sum of two integers


#include <iostream>

int main() {
    int chosen_number;
    const int mystery_number = 5;

    // input
    std::cout << "Enter your guess between 0-9: " << std::endl;
    std::cin >> chosen_number;


    // process
    if (chosen_number == mystery_number) {
        // output
        std::cout << "Correct!!" << std::endl;
    }

    // process
    if (chosen_number != mystery_number) {
        // output
        std::cout << "Wrong!" << std::endl;
    }
}
