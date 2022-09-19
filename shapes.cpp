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
    
}