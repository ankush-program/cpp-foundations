#include <iostream>
#include <cmath>

int main(){
    // Arithmetic operators(+,-,*,/,%)

    std::cout << 2+7 <<'\n'<< 45%8 << '\n';
    std::cout << 4/3 << '\n';      //Note: integer division results in removal of floating part
    std::cout << 10 % -8 << '\n';;          //Note: answer contains the sign of numerator in %

    // Exponentation

    // There is no operator for this('^' is bitwise XOR, not exponentation)
    // There is pow(double , double) function in <cmath> library for exponentation
    int a = std::pow(2.0, 3.0);      //pow takes double as input, not int
    std::cout << a << '\n';

    //Increment, Decrement operators
    //-Prefix Increment, Decrement
        std::cout<< ++a <<'\n'<< --a <<'\n';
        // In Prefix, first the variable increment/decrement, then then used in the expression.

    //-Postfix Increment, Decrement
        std::cout<< a++ <<'\n'<< a-- <<'\n';    
        // In Postfix, a temporary copy of the variable is created and returned/used in the expression, then original inremented
    
    //Conditional operator( ?: ) -- to check a condition /::Alternate to if-else
        // Syntax:
        // condition ? expressionIfTrue : expressionIfFalse
        
        int age { 20 };
        // If age >= 18 is true, it return "adult". Otherwise it return "minor".

        std::cout << ((age >= 18) ? "adult" : "minor") << '\n';

    //Relational operators (< , > , <= , >= , == , !=)  - retutn 0 for false, 1 for true
    std::cout << (7 < 8) << '\n'<< (8 != 8) << '\n' ;
    
    //Logical operators ( && , || , ! )
    std::cout << (!((5>4) && (6<7))) << '\n' << ((7<8) || (7==8));
    return 0;
}
