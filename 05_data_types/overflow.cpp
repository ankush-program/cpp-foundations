/* This program illustrates the well-defined wrap-around behavior of 
 * unsigned integers, and the behavior of signed integers when exceeding 
 * their memory boundaries.
 */

#include <iostream>

int main(){
  //------------UNSIGNED INTEGERS: wrap-around-------------
    // for a value greater than its max value, output will be the remainder of that value divided by (max value + 1)
    unsigned short int x{65535};     //max value for unsigned= 65535
    x = x + 1;
    std::cout<< x <<'\n';

    // for a value less than its min value, output will be (max value + 1) + that value
    x = -1;     // for -1 , output: (65535 + 1) - 1 = 65535
    std::cout<< x <<'\n';

  //SIGNED INTEGERS:
    // for signed int, it's undefined behaviour
    signed short int y{32767};      //max value for signed= 32767
    y = y + 1;
    std::cout<< y <<'\n';

    y = -32769;     //min value for signed= -32768
    std::cout<< y <<'\n';

  // Signed Unsigned mixup
    // When doing arithmetic operations with signed unsigned int , it will convert all to unsigned
    signed int a{1};
    unsigned int b{2};
    std::cout<< a - b;
    return 0;
}