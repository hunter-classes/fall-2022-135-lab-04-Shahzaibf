/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 4

    In this lab I created multiple shapes from funcs in shapes.cpp.
    Will be compiled with a makefile.

*/
#include <iostream>
#include "shapes.h"

int main(){
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = checkerboard(10,5);
    std::cout << "checkerboard(10,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = cross(7);
    std::cout << "cross(7):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator
    
    result = trapezoid(12,5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16,11):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator

    result = checkerboard3x3(27,27);
    std::cout << "checkerboard3x3(27,27):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator


}