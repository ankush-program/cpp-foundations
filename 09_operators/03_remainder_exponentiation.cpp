#include <iostream>
#include <cmath>

int main()
{
    //----------------------- REMAINDER OPERATOR -------------------------

    // The remainder operator is written as:
    //
    // %

    // It gives the remainder left over after integer division.

    int remainder1 { 10 % 3 };

    // 10 / 3 = 3 remainder 1

    std::cout << "10 % 3 = " << remainder1 << '\n';


    int remainder2 { 20 % 5 };

    // 20 divides evenly by 5,
    // so there is no remainder.

    std::cout << "20 % 5 = " << remainder2 << '\n';


    //----------------------- EVEN / ODD ---------------------------------

    int number { 17 };

    // If a number divided by 2 has remainder 0,
    // it is even.

    if (number % 2 == 0)
    {
        std::cout << number << " is even\n";
    }
    else
    {
        std::cout << number << " is odd\n";
    }


    //----------------------- REMAINDER WITH NEGATIVE VALUES ------------

    // The sign of the result follows the rules of C++ arithmetic.

    std::cout << "10 % -3 = " << 10 % -3 << '\n';
    std::cout << "-10 % 3 = " << -10 % 3 << '\n';


    //----------------------- EXPONENTIATION -----------------------------

    // C++ does NOT have a built-in exponentiation operator such as **.

    // The ^ operator is NOT exponentiation.
    //
    // ^ is the bitwise XOR operator.

    // To calculate powers, use std::pow() from <cmath>.

    double power { std::pow(2.0, 5.0) };

    // 2^5 = 32

    std::cout << "2^5 = " << power << '\n';


    //----------------------- ANOTHER POWER ------------------------------

    double square { std::pow(7.0, 2.0) };

    std::cout << "7^2 = " << square << '\n';


    //----------------------- COMMON MISTAKE -----------------------------

    // This does NOT calculate 2 to the power of 3:
    //
    // 2 ^ 3
    //
    // It performs bitwise XOR.

    int xorResult { 2 ^ 3 };

    std::cout << "2 ^ 3 (XOR, NOT exponentiation) = "
              << xorResult << '\n';

    return 0;
}