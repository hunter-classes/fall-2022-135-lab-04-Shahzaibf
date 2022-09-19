#include <iostream>
#include "shapes.h"

std::string box(int width, int height){
    std::string result = "";
    for (int i = 0;i < height;i++){
        for(int j = 0;j < width;j++){
            result += "*";
        }
        if (i == height - 1){
            result += "";
        } else{
            result += "\n";
        }
    }
    return result;
}