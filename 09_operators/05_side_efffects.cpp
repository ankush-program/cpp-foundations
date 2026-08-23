#include <iostream>

int main()
{
    //----------------------- SIDE EFFECTS -------------------------------

    // A side effect occurs when evaluating an expression
    // changes something outside of the expression itself.

    int x { 5 };

    // ++x changes x.
    // Therefore, incrementing x has a side effect.

    ++x;

    std::cout << "x = " << x << '\n';


    //----------------------- ASSIGNMENT SIDE EFFECT ---------------------

    int y { 10 };

    // Assignment changes y.

    y = 20;

    std::cout << "y = " << y << '\n';


    //----------------------- POSTFIX SIDE EFFECT ------------------------

    int a { 5 };

    // a++ produces the old value,
    // but also changes a.

    int oldValue { a++ };

    std::cout << "oldValue = " << oldValue << '\n';
    std::cout << "a = " << a << '\n';


    //----------------------- AVOID CONFUSING EXPRESSIONS ---------------

    // When several operations modify the same variable
    // in a single complicated expression,
    // the code can become difficult to understand.

    // Prefer simple, separate statements.

    int number { 10 };

    ++number;

    std::cout << "number = " << number << '\n';

    number *= 2;

    std::cout << "number = " << number << '\n';


    //----------------------- READABILITY -------------------------------

    // Good:
    int value { 10 };

    ++value;

    std::cout << value << '\n';


    // Avoid unnecessarily clever expressions.
    //
    // Simple code is easier to:
    // 1. read
    // 2. debug
    // 3. maintain
    // 4. reason about

    return 0;
}