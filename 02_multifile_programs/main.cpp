//not recommended to #include "user_input.cpp" as it cause naming collision , voilate ODR in big program
#include "user_input.h" // alternatively use forward declaration in small programs


// ODR(One Definition Rule) not voilates here because of using hearder guards
#include "sub.h"
#include "sub.h"

#include <iostream>

double add(double , double); 

int main(){
    double num1{user_input()};
    double num2{user_input()};
    
    std::cout<<"sum = "<<add(num1, num2)<<'\n';
    std::cout<<"sub = "<<sub(num1, num2)<<'\n';


    return 0;   // or use return EXIT_SUCCESS by #include <cstdlib> or <iostream>, if fails , it shows EXIT_FAILURE
}
