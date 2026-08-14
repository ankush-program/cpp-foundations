#include <iostream>

// A simple function to simulate a value that is only known at runtime
int getRuntimeValue(const int x) {     //value of function parameters are not known until the program executes, so they are not constant expression
    return x;
}

int main() {
    //--------------------------CONSTANT EXPRESSIONS----------------------------
    // An expression that can be fully evaluated by the compiler at compile-time.
    // They make programs faster because the calculation is done before the program even runs.
    // Eg. - literals, operators with constant expression operands
    //     - const integral type with constant expression initializer
    //     - Constexpr variables
  
      
    // '5 + 4' is a constant expression.
    // x is a const integral type with constant expression initializer
    // so x itself becomes a constant expression.
    const int x { 5 + 4 };

    int y{};                // y is not const, so not a constant expression
    const double z{5.5};    // z is non-integral type, so not a constant expression
    const int a{y};         // y is not a constant expression initializer, so a is not a compile time constant

    //--------------------------RUNTIME EXPRESSIONS-----------------------------
    // An expression that cannot be evaluated until the program is actually running 
    // (e.g., waiting for user input, or calling a normal function)
    // normal functions evaluate at runtime.

    // 'getRuntimeValue()' is a normal function, so a runtime expression.
    // b is a runtime constant. It cannot be changed after initialization, but the compiler doesn't know its value until the program executes.
    const int b { getRuntimeValue(5) };


    //--------------------------CONSTEXPR VARIABLES------------------------------
    // Because 'const' can mean either compile-time OR runtime, C++11 introduced 'constexpr'.
    // 'constexpr' forces the compiler to guarantee that the variable is evaluated at compile-time.
    
    constexpr int gravity { 9 };      // 9 is a constant expression, so gravity is a compile time constant
    constexpr int sum { 10 + 20 };    // 10 + 20 is a constant expression, so sum is a compile time constant

    // If i try to initialize a constexpr variable with a runtime value, the compiler will throw an error:
    // int age {};
    // std::cin >> age;
    // constexpr int myAge { age };   // COMPILE ERROR: 'age' is not known at compile-time constant

    // 1. Use 'constexpr' for all variables where the value is known at compile-time.
    // 2. Use 'const' for variables whose value is only known at runtime, but shouldn't change after initialization.

    std::cout << "Compile-time constant: " << x << '\n';
    std::cout << "Runtime constant: " << b << '\n';
    std::cout << "Constexpr variable (Gravity): " << gravity << '\n';

    return 0;
}
