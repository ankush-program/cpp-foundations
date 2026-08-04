#include <iostream>

bool isEqual(int a , int b){
    return a ==b;
}
int main(){
    std::cout<<"Enter an integer: ";
    int x{};
    std::cin>> x;

    //check if x equal 0, return true or false, if true then the statement execute, otherwise not
    if (x == 0) std::cout<<x <<" equal to 0\n";
    if (x > 0) std::cout<<x <<" greater than 0\n";
    if (x < 0) std::cout<<x <<" less than 0\n";
    
   /* Alternate
    *  if (x == 0) std::cout<<x <<" equal to 0";
    *  if else (x > 0) std::cout<<x <<" greater than 0\n";
    *  else std::cout<<x <<" less than 0\n";
    */
    
    //Here if x equal 0, condition converted to false and the statement will not execute.
    //if x not equal 0, condition converted to true and the statement execute.
    if (x) 
        std::cout<<"x = "<< x<<'\n';
    else if (!x)
        std::cout<<"x equal to "<< x<<'\n';

    bool y{false};

    if (y == false) std::cout<<"y = "<< y <<'\n';

    std::cout<< std::boolalpha;
    std::cout<< isEqual(x , y);
    return 0;
}
