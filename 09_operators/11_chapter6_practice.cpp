#include <iostream>

int main()
{
    //----------------------- CHAPTER 6 PRACTICE -------------------------

    // This program combines:
    //
    // 1. Arithmetic operators
    // 2. Remainder operator
    // 3. Relational operators
    // 4. Logical operators
    // 5. Conditional operator
    // 6. Increment operator
    // 7. Operator precedence
    // 8. Parentheses


    //----------------------- INPUT --------------------------------------

    std::cout << "Enter your marks: ";

    int marks{};

    std::cin >> marks;


    //----------------------- VALIDATION ---------------------------------

    // The && operator combines two conditions.

    if (marks < 0 || marks > 100)
    {
        std::cout << "Invalid marks.\n";
        return 0;
    }


    //----------------------- PASS / FAIL -------------------------------

    bool passed { marks >= 40 };

    std::cout << std::boolalpha;

    std::cout << "Passed: "
              << passed << '\n';


    //----------------------- GRADE -------------------------------------

    char grade {
        (marks >= 90) ? 'A' :
        (marks >= 80) ? 'B' :
        (marks >= 70) ? 'C' :
        (marks >= 60) ? 'D' :
        (marks >= 40) ? 'E' :
                        'F'
    };

    std::cout << "Grade: " << grade << '\n';


    //----------------------- EVEN / ODD ---------------------------------

    // % gives us the remainder after division.

    if (marks % 2 == 0)
    {
        std::cout << "Marks are even.\n";
    }
    else
    {
        std::cout << "Marks are odd.\n";
    }


    //----------------------- SCORE RANGE --------------------------------

    if (marks >= 40 && marks <= 100)
    {
        std::cout << "Marks are in the passing range.\n";
    }


    //----------------------- SIMPLE CALCULATION -------------------------

    int bonus { 5 };

    int finalMarks { marks + bonus };

    // Prevent the result from going above 100.

    if (finalMarks > 100)
    {
        finalMarks = 100;
    }

    std::cout << "Final marks: "
              << finalMarks << '\n';


    //----------------------- FINAL STATUS -------------------------------

    const char* status {
        (finalMarks >= 40) ? "PASS" : "FAIL"
    };

    std::cout << "Final status: "
              << status << '\n';


    //----------------------- COUNTER ------------------------------------

    int counter { 0 };

    ++counter;

    std::cout << "Counter after increment: "
              << counter << '\n';


    //----------------------- OPERATOR PRECEDENCE ------------------------

    int calculation {
        10 + 5 * 2
    };

    // Multiplication happens before addition:
    //
    // 5 * 2 = 10
    // 10 + 10 = 20

    std::cout << "10 + 5 * 2 = "
              << calculation << '\n';


    //----------------------- PARENTHESES -------------------------------

    int changedCalculation {
        (10 + 5) * 2
    };

    // Parentheses change the order:
    //
    // 10 + 5 = 15
    // 15 * 2 = 30

    std::cout << "(10 + 5) * 2 = "
              << changedCalculation << '\n';


    return 0;
}