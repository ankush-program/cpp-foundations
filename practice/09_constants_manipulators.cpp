#include <iostream>
#include <iomanip>
#define PI 3.14             // Object-like Macros(Constants)
#define SQUARE(x) (x*x)     // Function-like Macros

int main(){
    //---------------CONSTANTS-----------------
    // Constants are fixed values which cannot be changed
    const int a = 8;
    // a = 7;       //Error: const variable's value cannot be changed

    // We can make constants with #define also, but then the preprocessor only replace the identifier with the value provided
    std::cout << PI << std::endl;

    // Similarly, we can define functions by #define method
    std::cout << SQUARE(4) ;

    //--------------MANIPULATORS-----------------
    // Manipulators are special functions/objects designed to change the Input, Ouput formatting
    // Eg. endl, flush, boolalpha, left, right, hex,dec, oct - present in std namespace in <iostream>
    //    setw(n), setfill(a), setprecision(n)              - present in std namespace in <iomanip>
    
    std::cout << std::endl << std::flush;
    // flush - displays the remaining things present in the output buffer
    // endl - produces a newline along flushing the buffer

    // std::setw( ) only affects the very next item pushed to the stream only. after that item prints, the width rests back to 0
    std::cout << "Size of int: " << std::setw(10) << sizeof(int) ;
    return 0;
}