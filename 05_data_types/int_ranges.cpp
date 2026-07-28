#include <iostream>

int main(){
    std::cout<<"----------UNSIGNED INTEGER-----------\n";
    // UNSIGNED INTEGER: 2^n unique values
    // Range for n-bit unsigned: 0 to (2^n)-1    ,(all bit used to store magnitude)
    // For 16 bit unsigned integer, range is 0 to 65535

    unsigned short int x{65535}; // short is of 2 Bytes , so max value for unsigned= 65535
    std::cout<<"Size of x is: "<<sizeof(x)<<" Bytes\n"<<"x (max) = "<<x <<'\n';

    x = x + 1;
    std::cout<<"x = "<< x <<" Error: Modulo Wrap-around\n"
            <<"--------------------------------------\n\n"; 


    std::cout<<"-----------SIGNED INTEGER-------------\n";

    // SIGNED INTEGER: 2^n unique values
    // Range: -(2^(n-1)) to (2^(n-1))-1    ,( 1 bit store sign, (n-1) bits store magnitude)
    // For 16 bit signed integer, range is -32768 to 32767

    signed short int y{32767};  // or int x{}; both same as by default, integers are signed  in cpp
    std::cout<<"Size of y is: "<<sizeof(y)<<" Bytes\n"<<"y (max) = "<<y <<'\n';

    y = y + 1;
    std::cout<<"y = "<< y<<" Error: undefined behaviour/ minimum value\n"
            <<"--------------------------------------\n"; 

    return 0;
}