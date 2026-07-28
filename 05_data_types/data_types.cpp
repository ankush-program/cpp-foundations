// A utility program to print the sizes of fundamental C++ data types

#include <iostream>
#include <iomanip> //for std::setw

void printIntegerSizes(){
    std::cout<<std::setw(40)<<"Size of int is: "<<sizeof(int)<<'\n';
    std::cout<<std::setw(40)<<"Size of short int (or short) is: "<<sizeof(short)<<'\n';
    std::cout<<std::setw(40)<<"Size of long int (or long) is: "<<sizeof(long)<<'\n';
    std::cout<<std::setw(40)<<"Size of long long int(or long long) is: "<<sizeof(long long)<<'\n';
}
void printBooleanSizes(){
    std::cout<<std::setw(40)<<"Size of bool is: "<<sizeof(bool)<<'\n';
}
void printCharacterSizes(){
    std::cout<<std::setw(40)<<"Size of char is: "<<sizeof(char)<<'\n';
    std::cout<<std::setw(40)<<"Size of wchar_t is: "<<sizeof(wchar_t)<<'\n';
    std::cout<<std::setw(40)<<"Size of char16_t is: "<<sizeof(char16_t)<<'\n';
    std::cout<<std::setw(40)<<"Size of char32_t is: "<<sizeof(char32_t)<<'\n';
}
void printFloatingPointSizes(){
    std::cout<<std::setw(40)<<"Size of float is: "<<sizeof(float)<<'\n';
    std::cout<<std::setw(40)<<"Size of double is: "<<sizeof(double)<<'\n';
    std::cout<<std::setw(40)<<"Size of long double is: "<<sizeof(long double)<<'\n';
}
int main(){
    std::cout<<"\n---------- Size of Data Types (in Bytes): ----------\n\n";

    std::cout<<std::left; //left justify

    printIntegerSizes();
    printBooleanSizes();
    printCharacterSizes();
    printFloatingPointSizes();

    return 0;
}