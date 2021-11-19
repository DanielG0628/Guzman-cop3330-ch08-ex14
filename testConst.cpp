/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

int add(const int a, const int b){
    return a + b;
}

int subtract(const int a, const int b){
    return a - b;
}

int multiply(const int a, const int b){
    return a * b;
}

//When you use const, you cannot change the value of the variable within the function. Const is used for functions where the parameter values are not changed. People do not do this often because in many cases, the parameters in a function are changed within the
//function. This small program is my attempt to see how the const arguement works.