// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>

void conversion() {
    // This program converts Celcius to Farenheit

    float temperatureCelcius;
    float temperatureFarenheit;


    std::cout << "Enter a temperature in Celcius here: ";
    std::cin >> temperatureCelcius;

    temperatureFarenheit = (9.0/5.0) * temperatureCelcius + 32;


    std::cout << temperatureCelcius << "°C is " << temperatureFarenheit \
              << "° in Farenheit" << std::endl;
}

int main() {
    conversion();
}
