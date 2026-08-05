#include <iostream>

void doublefunc(double x){
    std::cout<< x<<'\n';
}
void intfunc(int x){
    std::cout<< x<<'\n';
}
int main(){
    //----------------------IMPLICIT TYPE CONVERSION-------------------------
    //coversion of one type into another without explicitly asking
    int a{5};
    doublefunc(a);  // int converted to double without data loss

    double b{5.6};
    intfunc(b);     // double converted to int with data loss(may generate compiler warning)

    //----------------------EXPLICIT TYPE CONVERSION-------------------------
    //using static_cast<new_type>(expression)
    std::cout<< static_cast<double>(a);

    char ch{};
    std::cout<<"\nEnter a character: ";
    std::cin>> ch;
    std::cout<<"You entered: "<<ch<<" having ASCII Code "<< static_cast<int>(ch) ;
    return 0;
}