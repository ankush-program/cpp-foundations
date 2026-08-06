#include <cstddef>      // Required for std::size_t
#include <iostream>

//-----------------OBJECT LIKE MACRO WITH SUBSTITUTED TEXT------------------------
//Change PI to 3.14 everywhere from now in this file, Compiler and Debugger don't even
//know this change, So hard to debug and also it doesn't follow C++ scoping rules
#define PI 3.14

/*
void PI(int PI){    //If uncommented this, this function breaks! Because the preprocessor change 'PI' to '3.14'
    std::cout<<PI;
}    
*/


//----------------------------Constant variables----------------------------------
const void print(const double gravity){
    std::cout<<"gravity constant = "<< gravity <<'\n';
}


int main(){
   //------------------------------CONSTANTS--------------------------------------
    // Constants are the values which cannot be changed during a program execution
    // Constants are of Three type-

   //1--------------CONSTANT VARIABLE: CONSTANTS WITH NAME(IDENTIFIER)------------
    const double gravity{9.8};
    print(gravity);

   //2-----------------OBJECT LIKE MACRO WITH SUBSTITUTED TEXT---------------------
        // #define PI 3.14 above
        std::cout<< PI;

   //3---------------------------LITERAL CONSTANTS---------------------------------
    // A literal is a hardcoded value directly inserted into the code.

    int x { 10 };     // 10 is a literal constant
    char a { 'A' };    // 'A' is a literal

    // By default, literals have an implicit type:
    // - 10      -> int
    // - 4.5     -> double
    // - true    -> bool
    // - 'A'     -> char
    // - "Hello" -> C-style stringunsigned 
    
    // Implicit Conversion Example:
    // By default, the literal '3' is an int. 
    // The compiler must convert it to an unsigned int to initialize 'y'.
    unsigned int y { 3 };
    
    //----- CHANGING DEFAULT TYPES WITH SUFFIXES -----
    // We can change the default type of a literal by appending a suffix. 
    // This prevents the compiler from needing to do implicit conversions.    
    
    //----- Integer Suffixes -----
    int                b { 10 };    // Default is int
    unsigned int       c { 5u };    // 'u' or 'U'                                              -> unsigned int
    long               d { 4L };    // 'l' or 'L'                                              -> long
    unsigned long      e { 4uL };   // 'ul', 'uL', 'Ul', 'UL', 'lu', 'Lu', 'lU', 'LU'          -> unsigned long
    long long          f { 4LL };   // 'll' or 'LL'                                            -> long long
    unsigned long long g { 4uLL };  // 'ull', 'uLL', 'Ull', 'ULL', 'llu', 'llU', 'LLu', 'LLU'  -> unsigned long long
    
    // C++23 Size Types    
    int h { 7z };                   // 'z' or 'Z'                                              -> Generate a signed size type. (Converted to int here)
    std::size_t i{7uz};             // 'uz', 'Uz', 'uZ', 'UZ'   std::size_t i{7uZ};            -> unsigned size_t (By default, size_t is unsigned)

    //----- Floating-Point Suffixes -----
    
    // By default, floating-point literals like 5.3 are of type 'double'.
    float j { 5.3 };                // Conversion: double (5.3) to float
    float k { 4.56f };              // 'f' or 'F'. No conversion: 'f' or 'F' makes it a float
    
    double l { 5.9l };              // 'l' or 'L'. Conversion: long double (5.9L) to double
                                    // But 'l' (small L) confused with '1' (one)

    //----- STRING LITERALS ------
    std::cout<<"Hello";
    // By default, the literal "Hello" has the type: const char[6]
    // 6 characters- 'H', 'e', 'l', 'l', 'o', '\0'

    // '\0' is the null terminator. It tells the compiler where the string ends.
    // String literals are constant objects created at program startup and exist until the program terminates.
    
    //----- TYPE QUALIFIER ------
    // A keyword applied to a type that modifies how that type behaves.
    // - const:     Declares a constant variable (value cannot change)
    // - volatile:  Tells the compiler the value can change unexpectedly (e.g., by hardware). 

    return 0;
}
