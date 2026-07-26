#include <iostream>
#define ENABLE_DEBUG //when not to debug , comment it

double getUserInput(){

    #ifdef ENABLE_DEBUG
    std::cerr<<"getUserInput() called\n"; // cerr outputs instantly rather than cout buffering
    #endif

    std::cout<<"Enter a number: ";
    double input{};
    std::cin>>input;

    #ifdef ENABLE_DEBUG
    std::cerr<<"input = "<<input<<'\n';
    #endif

    return input;
}

void print(double output){

    #ifdef ENABLE_DEBUG
    std::cerr<<"print() called\n";
    #endif

    #ifdef ENABLE_DEBUG
    std::cerr<<"output = "<< output <<'\n';
    #endif

    std::cout<<output;
}

int main(){

    #ifdef ENABLE_DEBUG
    std::cerr<<"main() called\n";
    #endif

    double num1{getUserInput()};

    #ifdef ENABLE_DEBUG
    std::cerr << "num1 = "<<num1<<'\n';
    #endif

    double num2{getUserInput()};

    #ifdef ENABLE_DEBUG
    std::cerr << "num2 = "<<num2<<'\n';
    #endif

    std::cout<< num1 <<" * "<< num2 <<" = ";
    print( num1 * num2 );

    return 0;
}