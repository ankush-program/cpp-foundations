#include <iostream>

int main()
{
    //----------------------- ARITHMETIC OPERATORS -----------------------

    // C++ provides the basic arithmetic operators:
    //
    // +   addition
    // -   subtraction
    // *   multiplication
    // /   division
    // %   remainder


    //----------------------- ADDITION -----------------------------------

    int a { 10 };
    int b { 3 };

    int addition { a + b };

    std::cout << "Addition: " << addition << '\n';


    //----------------------- SUBTRACTION --------------------------------

    int subtraction { a - b };

    std::cout << "Subtraction: " << subtraction << '\n';


    //----------------------- MULTIPLICATION -----------------------------

    int multiplication { a * b };

    std::cout << "Multiplication: " << multiplication << '\n';


    //----------------------- INTEGER DIVISION ---------------------------

    // When both operands are integers,
    // division produces an integer result.

    int integerDivision { a / b };

    // 10 / 3 mathematically equals 3.333...
    //
    // But integer division discards the fractional portion.

    std::cout << "Integer division: " << integerDivision << '\n';


    //----------------------- FLOATING-POINT DIVISION --------------------

    double x { 10.0 };
    double y { 3.0 };

    double floatingDivision { x / y };

    // Because both operands are double,
    // the result contains a fractional part.

    std::cout << "Floating-point division: "
              << floatingDivision << '\n';


    //----------------------- MIXED TYPES --------------------------------

    int integer { 10 };
    double decimal { 3.0 };

    // The integer is converted to double
    // before the division is performed.

    double mixedDivision { integer / decimal };

    std::cout << "Mixed division: "
              << mixedDivision << '\n';


    //----------------------- NEGATIVE NUMBERS ---------------------------

    int negative { -10 };

    std::cout << "Negative number: " << negative << '\n';

    std::cout << "10 + (-3) = " << 10 + (-3) << '\n';
    std::cout << "10 - (-3) = " << 10 - (-3) << '\n';


    //----------------------- ORDER OF OPERATIONS ------------------------

    int result { 2 + 3 * 4 };

    // Multiplication happens before addition.

    std::cout << "2 + 3 * 4 = " << result << '\n';


    //----------------------- PARENTHESES -------------------------------

    int resultWithParentheses { (2 + 3) * 4 };

    std::cout << "(2 + 3) * 4 = "
              << resultWithParentheses << '\n';

    return 0;
}