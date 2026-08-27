#include <iostream>
#include <cmath>

int main()
{
    //----------------------- FLOATING-POINT COMPARISON ------------------

    // Floating-point numbers such as float and double
    // cannot represent every decimal value exactly.

    double a { 0.1 };
    double b { 0.2 };

    double result { a + b };

    std::cout << "a + b = " << result << '\n';


    //----------------------- EXACT EQUALITY -----------------------------

    // Direct equality comparison can sometimes be surprising.

    if (result == 0.3)
    {
        std::cout << "Exactly equal\n";
    }
    else
    {
        std::cout << "Not exactly equal\n";
    }


    //----------------------- EPSILON COMPARISON -------------------------

    // Instead of asking:
    //
    // "Are these floating-point values exactly equal?"
    //
    // we can ask:
    //
    // "Are they close enough?"

    double expected { 0.3 };

    double difference {
        std::abs(result - expected)
    };

    constexpr double epsilon { 0.000001 };

    if (difference < epsilon)
    {
        std::cout << "Values are close enough\n";
    }
    else
    {
        std::cout << "Values are different\n";
    }


    //----------------------- WHY THIS MATTERS ---------------------------

    // Floating-point arithmetic involves approximation.
    //
    // Therefore, code dealing with floating-point values
    // should consider an appropriate tolerance.

    double x { 10.0 / 3.0 };

    std::cout << "10 / 3 = " << x << '\n';

    return 0;
}