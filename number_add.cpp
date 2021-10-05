// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program asks the user to enter how many numbers they want to add
// Then the user inputs the number they want to add
#include <iostream>

int main() {
    // this tells the user the sum of all the positive numbers they want to add

    std::string numberCount;
    int integerAsNumber;
    std::string numberTwoCount;
    int integerAsNumberTwo;
    // int numberAnswer;
    int answer = 0;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> numberCount;
    std::cout << std::endl;

    // process & output
    try {
        integerAsNumber = std::stoi(numberCount);
        for (int numberAnswer = 0; numberAnswer <
        integerAsNumber; numberAnswer++) {
            std::cout << "Enter a number to add: ";
            std::cin >> numberTwoCount;
            std::cout << std::endl;
            integerAsNumberTwo = std::stoi(numberTwoCount);

            if (integerAsNumberTwo < 0) {
                continue;
            }
            answer = answer + integerAsNumberTwo;
        }
        std::cout << "The sum of all of the positive numbers is = " <<
        answer << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid number.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
