#include <iostream>

int main()
{
    //----------------------- OPERATOR PRECEDENCE -----------------------

    // When an expression contains multiple operators,
    // C++ needs rules to determine which operator is evaluated first.

    // Example:
    // Multiplication has higher precedence than addition.

    int result1 { 2 + 3 * 4 };

    // The multiplication happens first:
    //
    // 3 * 4 = 12
    // 2 + 12 = 14

    std::cout << "2 + 3 * 4 = " << result1 << '\n';


    //----------------------- USING PARENTHESES --------------------------

    // Parentheses can explicitly tell C++ what we want evaluated first.

    int result2 { (2 + 3) * 4 };

    // First:
    // 2 + 3 = 5
    //
    // Then:
    // 5 * 4 = 20

    std::cout << "(2 + 3) * 4 = " << result2 << '\n';


    //----------------------- ASSOCIATIVITY ------------------------------

    // Precedence answers:
    // "Which operator has priority?"

    // Associativity answers:
    // "When operators have the same precedence,
    //  which one is evaluated first?"

    // Most binary operators with the same precedence
    // are evaluated from left to right.

    int result3 { 20 - 5 - 3 };

    // Left-to-right:
    //
    // (20 - 5) - 3
    // 15 - 3
    // = 12

    std::cout << "20 - 5 - 3 = " << result3 << '\n';


    //----------------------- BEST PRACTICE ------------------------------

    // Do not try to memorize every precedence rule.
    //
    // If an expression could be confusing,
    // use parentheses.

    int unclear { 2 + 3 * 4 };

    int clear { 2 + (3 * 4) };

    std::cout << "Without extra parentheses: " << unclear << '\n';
    std::cout << "With parentheses: " << clear << '\n';

    // Parentheses improve readability
    // and reduce the possibility of mistakes.

    return 0;
}