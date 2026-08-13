#include <iostream>

int main() {
    //---------------OPTIMIZATION---------------
    // The process of modifying code to make it more efficient, execute faster, or use less memory space.

    //-------------THE "AS-IF" RULE-------------
    // The compiler can modify or rearrange code for optimization as long as 
    // the program's observable behavior (like console output) remains exactly the same.

    // 1. Constant Folding: 
    // The compiler evaluates expressions involving literal or constant operands at compile-time.
    // The compiler translates this directly to: std::cout << 11 << '\n';
    std::cout << (4 + 7) << '\n'; 
    
    // 2. Constant Propagation: 
    // The compiler replaces variables that have known constant values with their literal values.
    // Using 'const' helps the compiler confidently apply this optimization.
    const int x { 5 };
    // The compiler replaces 'x' and translates this directly to: std::cout << 5 << '\n';
    std::cout << x << '\n';       
    
    // 3. Dead Code Elimination: 
    // The compiler completely removes code that is calculated but never used.
    // 'y' is calculated but never printed or used anywhere else. 
    // The compiler will likely remove this line entirely from the final executable.
    int y { x * 2 };              
    
    // optimization makes debugging harder because it changes, removes code.
    // If try to debug an optimized program, variables like 'x' or 'y' might say "optimized out".

    return 0;
}
