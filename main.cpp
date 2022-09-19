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
    
}