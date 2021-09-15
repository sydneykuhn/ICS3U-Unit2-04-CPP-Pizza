// Copyright (c) 2021 Sydney Kuhn All rights reserved.
//
// Created by: Sydney Kuhn
// Created on: Sep 2021
// This program calculates the cost of pizza

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates price of a pizza
    const double RENT = 1;
    const double LABOUR = 0.75;
    const double COST_PER_INCH = 0.50;
    const double HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the diameter of the pizza you would like (inch): ";
    std::cin >> diameter;

    // process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
