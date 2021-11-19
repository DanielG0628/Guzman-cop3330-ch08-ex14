/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

#include <iostream>
#include "testConst.cpp"
using namespace std;

int main() {
    
    int a = 100;
    int b = 10;
    int c;

    c = add(a, b);
    cout << "The sum is " << c << ".\n";

    c = subtract(a, b);
    cout << "The difference is " << c << ".\n";

    c = multiply(a, b);
    cout << "The product is " << c << ".\n";

    return 0;

}