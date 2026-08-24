#include <iostream>

int main()
{
    //----------------------- COMMA OPERATOR -----------------------------

    // The comma operator allows multiple expressions
    // to be evaluated from left to right.

    int a { 1 };
    int b { 2 };

    // Both expressions are evaluated.

    int result { (a += 5, b += 10, a + b) };

    // First:
    // a += 5
    //
    // a becomes 6
    //
    // Second:
    // b += 10
    //
    // b becomes 12
    //
    // Third:
    // a + b
    //
    // 6 + 12 = 18
    //
    // The value of the entire comma expression
    // is the value of the final expression.

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "result = " << result << '\n';


    //----------------------- COMMA IN FOR LOOPS -------------------------

    // The comma operator can sometimes be useful
    // in the initialization/update parts of a for loop.

    for (int x { 0 }, y { 10 };
         x < 5;
         ++x, --y)
    {
        std::cout << "x = " << x
                  << ", y = " << y << '\n';
    }


    //----------------------- BEST PRACTICE ------------------------------

    // Although the comma operator is valid C++,
    // using separate statements is often easier to understand.

    int value1 { 10 };
    int value2 { 20 };

    value1 += 5;
    value2 += 5;

    std::cout << value1 << ' ' << value2 << '\n';

    return 0;
}