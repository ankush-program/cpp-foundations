#include <iostream>

int main()
{
    //----------------------- RELATIONAL OPERATORS -----------------------

    // Relational operators compare two values.
    //
    // <
    // >
    // <=
    // >=
    // ==
    // !=
    //
    // Their result is a bool:
    // true or false.


    int a { 10 };
    int b { 20 };

    std::cout << std::boolalpha;


    //----------------------- LESS THAN ----------------------------------

    std::cout << "a < b  : "
              << (a < b) << '\n';


    //----------------------- GREATER THAN -------------------------------

    std::cout << "a > b  : "
              << (a > b) << '\n';


    //----------------------- LESS THAN OR EQUAL -------------------------

    std::cout << "a <= b : "
              << (a <= b) << '\n';


    //----------------------- GREATER THAN OR EQUAL ----------------------

    std::cout << "a >= b : "
              << (a >= b) << '\n';


    //----------------------- EQUALITY -----------------------------------

    std::cout << "a == b : "
              << (a == b) << '\n';


    //----------------------- INEQUALITY ---------------------------------

    std::cout << "a != b : "
              << (a != b) << '\n';


    //----------------------- USING COMPARISON IN IF ---------------------

    int age { 18 };

    if (age >= 18)
    {
        std::cout << "Adult\n";
    }
    else
    {
        std::cout << "Minor\n";
    }


    //----------------------- COMMON MISTAKE -----------------------------

    // == means comparison.
    //
    // = means assignment.

    int x { 5 };

    if (x == 5)
    {
        std::cout << "x is 5\n";
    }

    // Do not confuse:
    //
    // x = 5;
    //
    // with:
    //
    // x == 5;


    //----------------------- CHAINED COMPARISONS ------------------------

    // C++ does not interpret this the same way
    // mathematical notation might suggest:
    //
    // 0 < x < 10
    //
    // Instead, write the two comparisons explicitly
    // and combine them with &&.

    if (x > 0 && x < 10)
    {
        std::cout << "x is between 0 and 10\n";
    }

    return 0;
}