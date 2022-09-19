/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 4

    This is where I had coded my funcs from the .h file.

*/

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

std::string cross(int size){
    std::string result = "";
    int countleft = 0;
    int countl = 0;
    int countright= size - 2;
    int countr = 0;
    if(size % 2 == 0) {
        for (int i = 0;i < size;i++){
            if (i >= size/2){
            for(int m = 0;m < countl; m++){
                result+=" ";
            }
            countl--;
            } else {
                for (int j = 0;j < countleft; j++){
                    result+=" ";
                }
                countleft++;
                countl = countleft - 1;
            }
            result+="*";
            if (i >= size/2){
                for (int q = 0;q < countr;q++){
                    result+=" ";
                }
                countr = countr + 2;
            } else {
                for (int k = 0;k < countright; k++){
                    result+=" ";
                } 
                countright= countright - 2;
            }
            result+="*";    
            result+="\n";
        }
    } else {
        countr = 1;
        for (int i = 0;i < size;i++){
            if (i > size/2){
            for(int m = 0;m < countl; m++){
                result+=" ";
            }
            countl--;
            } else if (i == size/2){
                for(int z = 0; z < countleft;z++){
                    result+=" ";
                }
                countleft++;
            }else {
                for (int j = 0;j < countleft; j++){
                    result+=" ";
                }
                countleft++;
                countl = countleft - 1;
            }
            result+="*";
            if (i > size/2){
                for (int q = 0;q < countr;q++){
                    result+=" ";
                }
                countr = countr + 2;
            } else {
                for (int k = 0;k < countright; k++){
                    result+=" ";
                } 
                countright= countright - 2;
            }
            if (!(i == size/2)){
                result+="*";    
            }
            result+="\n";
        }
    }
    return result;
}

std::string lower(int length){
    std::string result = "";
    int count = 1;
    for (int i = 0; i < length; i++){
        for (int j = 0; j < count; j++){
            result+="*";
        }
        count++;
        if (i == length - 1){
            result += "";
        } else{
            result += "\n";
        }
    }
    return result;
}

std::string upper(int length) {
    std::string result = "";
    int count = 0;
    for(int i = length; i > 0; i--){
        for (int q = 0; q < count; q++){
            result+=" ";
        }
        count++;
        for(int j = 0; j < i; j++){
            result += "*";
        }
        result += "\n";
    }
    return result;
    
}

std::string trapezoid(int width, int height){
    std::string result = "";
    if ((width % 2 == 1 && height * 2 > width + 1 || width % 2 == 0 && height * 2 > width)){
        return "Impossible shape!";
    } else {
        for (int i = 0; i < height;i++){
            for(int j = 0; j < width - i; j++){
                if (j < i){
                    result += " ";
                } else {
                    result += "*";
                }
            }
            result += "\n";
        }
        return result;
    }

}

std::string checkerboard3x3(int width, int height){
    std::string result = "";
    int countstar;
    int countspace;
    for (int i = 0; i < height;i++){ //i is rows
        for (int j = 0;j < width;j++){//j is cols
            if((j % 6 < 3 && i % 6 < 3) || (j % 6 >=3 && i % 6 >= 3)){
                if(countstar < 3){
                    result+="*";
                }
                countstar++;
                if(countstar == 3){
                    countstar = 0;
                }
            } else{
                if(countspace < 3){
                    result+=" ";
                }
                countspace++;
                if(countspace == 3){
                    countspace = 0;
                }
            }
        }
        result+="\n";
    }
    return result;
}