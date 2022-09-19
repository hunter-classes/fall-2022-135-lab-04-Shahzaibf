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

std::string checkerboard(int width, int height){
    std::string result = "";
    int count = 0;
    int timer;
    for (int i = 0; i < height;i++){
        count++;
        timer = 0;
        for(int j = 0;j < width;j++){
            timer++;
            if (count % 2 == 0 && timer == 1){ 
                for(int k = 0;k < width - 1;k++){
                    result += " *";
                }
            } else if (timer == 1){
                for(int l = 0; l < width;l++){
                    result+="* ";
                }
            }
        }
        if (i == height - 1){
            result += "";
        } else{
            result += "\n";
        }
    }
    return result;
}