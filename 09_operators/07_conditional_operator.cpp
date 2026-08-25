#include <iostream>

int main()
{
    //----------------------- CONDITIONAL OPERATOR -----------------------

    // The conditional operator is also called
    // the ternary operator.

    // Syntax:
    //
    // condition ? expressionIfTrue : expressionIfFalse


    int age { 20 };

    // If age >= 18 is true,
    // "adult" is selected.
    //
    // Otherwise "minor" is selected.

    const char* status {
        (age >= 18) ? "adult" : "minor"
    };

    std::cout << "Status: " << status << '\n';


    //----------------------- SIMPLE EXAMPLE -----------------------------

    int number { 7 };

    int result {
        (number % 2 == 0) ? 0 : 1
    };

    std::cout << "Result: " << result << '\n';


    //----------------------- ASSIGNING A VALUE --------------------------

    int a { 10 };
    int b { 20 };

    int larger {
        (a > b) ? a : b
    };

    std::cout << "Larger number: "
              << larger << '\n';


    //----------------------- FUNCTION RETURN ---------------------------

    auto isPositive = [](int value)
    {
        return (value > 0) ? true : false;
    };

    std::cout << std::boolalpha;
    std::cout << "Is 5 positive? "
              << isPositive(5) << '\n';


    //----------------------- CONDITIONAL OPERATOR IN OUTPUT -------------

    int score { 75 };

    std::cout
        << "Result: "
        << ((score >= 50) ? "Pass" : "Fail")
        << '\n';


    //----------------------- READABILITY -------------------------------

    // The conditional operator is useful for short decisions.

    // Good:
    int x { 10 };
    int y { 20 };

    int minimum { (x < y) ? x : y };

    std::cout << "Minimum: " << minimum << '\n';

    // Avoid putting complicated logic inside a ternary operator.
    // If the condition becomes difficult to understand,
    // use a normal if/else statement instead.

    return 0;
}