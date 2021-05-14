// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 14 2021
// This program asks the user to guess a number between 0 to 9
// and tells the user if the guess is right or wrong

#include <iostream>
#include <random>

int main() {
    int userGuessAsInt, correctGuess;
    std::string userGuessAsString;

    // generate a number between 0 to 9
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution <int> idist(0, 9);
    correctGuess = idist(rgen);

    // get the user's guess
    std::cout << "Enter a number between 0 to 9: ";
    // get the guess from the user as a string
    std::cin >> userGuessAsString;

    // check if the guess is correct or wrong
    if (userGuessAsInt == correctGuess) {
        std::cout << "You are correct!";
    } else {
        std::cout << "You are wrong! The answer is = ";
        std::cout << correctGuess << std::endl;
    }

try {
    // convert the user's guess to an int
    userGuessAsInt = std::stoi(userGuessAsString);
} catch (std::invalid_argument) {
    // The user did not enter an integer.
    std::cout << userGuessAsString << " is not an integer.\n";
}
}
