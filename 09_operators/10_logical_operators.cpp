#include <iostream>

int main()
{
    //----------------------- LOGICAL OPERATORS --------------------------

    // Logical operators allow us to combine
    // or modify boolean expressions.
    //
    // &&   logical AND
    // ||   logical OR
    // !    logical NOT


    //----------------------- LOGICAL AND --------------------------------

    // && returns true only when BOTH conditions are true.

    int age { 20 };

    bool hasLicense { true };

    if (age >= 18 && hasLicense)
    {
        std::cout << "Can drive\n";
    }


    //----------------------- LOGICAL OR ---------------------------------

    // || returns true when AT LEAST ONE condition is true.

    bool hasCash { false };
    bool hasCard { true };

    if (hasCash || hasCard)
    {
        std::cout << "Can pay\n";
    }


    //----------------------- LOGICAL NOT --------------------------------

    // ! reverses a boolean value.

    bool isRaining { false };

    if (!isRaining)
    {
        std::cout << "It is not raining\n";
    }


    //----------------------- COMBINING CONDITIONS -----------------------

    int score { 75 };

    if (score >= 50 && score <= 100)
    {
        std::cout << "Valid passing score\n";
    }


    //----------------------- PARENTHESES --------------------------------

    bool student { true };
    bool employed { false };

    // Parentheses make the intended logic obvious.

    if (student && !employed)
    {
        std::cout << "Student who is not employed\n";
    }


    //----------------------- SHORT-CIRCUIT EVALUATION -------------------

    // Logical operators evaluate from left to right.

    // With &&:
    //
    // If the left side is false,
    // C++ does not need to evaluate the right side.

    // With ||:
    //
    // If the left side is true,
    // C++ does not need to evaluate the right side.


    int number { 10 };

    if (number != 0 && 100 / number > 5)
    {
        std::cout << "Both conditions are true\n";
    }

    // number != 0 is checked first.
    //
    // This is useful because the second expression
    // would be dangerous if number were zero.


    //----------------------- BOOLEAN RESULTS ----------------------------

    std::cout << std::boolalpha;

    std::cout << "true && true  = "
              << (true && true) << '\n';

    std::cout << "true && false = "
              << (true && false) << '\n';

    std::cout << "true || false = "
              << (true || false) << '\n';

    std::cout << "!true         = "
              << (!true) << '\n';

    return 0;
}