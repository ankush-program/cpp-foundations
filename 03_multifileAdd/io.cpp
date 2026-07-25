#include "io.h"
#include <iostream>

double readNumber(){
    std::cout<<"Enter a number: ";
    double num{};
    std::cin>>num;
    return num;
}

void writeAnswer(double num){
    std::cout<<"sum: "<<num;
}