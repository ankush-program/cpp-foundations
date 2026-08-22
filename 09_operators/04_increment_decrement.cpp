#include <iostream>

int main()
{
    //----------------------- INCREMENT OPERATOR -------------------------

    // ++ increases a variable by 1.

    int x { 5 };

    ++x;

    std::cout << "After ++x: " << x << '\n';


    //----------------------- DECREMENT OPERATOR -------------------------

    // -- decreases a variable by 1.

    --x;

    std::cout << "After --x: " << x << '\n';


    //----------------------- PREFIX INCREMENT ---------------------------

    int a { 5 };

    // Prefix:
    //
    // ++a
    //
    // The variable is incremented first.
    // Then its new value is used.

    int result1 { ++a };

    std::cout << "a = " << a << '\n';
    std::cout << "result1 = " << result1 << '\n';


    //----------------------- POSTFIX INCREMENT --------------------------

    int b { 5 };

    // Postfix:
    //
    // b++
    //
    // The old value is used first.
    // Then b is incremented.

    int result2 { b++ };

    std::cout << "b = " << b << '\n';
    std::cout << "result2 = " << result2 << '\n';


    //----------------------- PREFIX DECREMENT ---------------------------

    int c { 5 };

    int result3 { --c };

    std::cout << "c = " << c << '\n';
    std::cout << "result3 = " << result3 << '\n';


    //----------------------- POSTFIX DECREMENT --------------------------

    int d { 5 };

    int result4 { d-- };

    std::cout << "d = " << d << '\n';
    std::cout << "result4 = " << result4 << '\n';


    //----------------------- SIMPLE LOOP -------------------------------

    // Increment operators are commonly used
    // when repeatedly changing a counter.

    for (int i { 0 }; i < 5; ++i)
    {
        std::cout << "i = " << i << '\n';
    }


    //----------------------- BEST PRACTICE ------------------------------

    // When the old value is not needed,
    // prefer prefix increment/decrement:

    ++x;
    --x;

    // This clearly communicates that we simply want
    // to change the variable.

    return 0;
}