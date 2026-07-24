#include "user_input.h"
#include <iostream>

double user_input(){
    std::cout<<"Enter a number: ";
    double input{};
    std::cin>>input;
    return input;
}
