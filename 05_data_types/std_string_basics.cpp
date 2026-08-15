#include <iostream>
#include <string>       // required for std::string

int main() {
    //--------------------------INTRODUCTION TO STD::STRING----------------------------
    // C-style string literals (like "Hello") are difficult and dangerous to manipulate.
    // Modern C++ uses 'std::string' to make text handling easy and safe.

    // std::string uses dynamic memory allocation (requesting memory from the OS at runtime).
    // This makes it extremely flexible, but expensive to initialize and copy compared to fundamental types like 'int' or 'double'.

    //------------------------C-STYLE LITERALS VS STRING LITERALS--------------------------
    // By default, text inside double quotes is a C-style string literal, NOT a std::string.
    // Here, the compiler allocates memory for the std::string, then copies the C-style literal over it.
    std::string name1 { "Hello" };

    // To make it a true std::string literal from the very beginning, use the 's' suffix.
    using namespace std::string_literals;   // required for s suffix
    std::string name2 { "Hello"s };

    //---------------------------------STRING INPUT WITH CIN------------------------------------
    // Standard std::cin for strings stops reading at the first whitespace (space, tab, newline).
    // If I type "John Doe", it only stores "John" and leaves " Doe\n" stuck in the input buffer.
    
    std::cout << "Enter a single word: ";
    std::string singleWord {};
    std::cin >> singleWord;     // '\n' (and any subsequent words) remains in input buffer
    std::cout << "You entered: " << singleWord << '\n';

    //--------------------------FULL LINE INPUT & THE 'WS' TRAP----------------------------
    // To read a full line containing spaces, we use std::getline().

    std::cout << "Enter your full name: ";
    std::string fullName {};

    // std::getline(std::cin , fullName);
    // If I use std::getline() after std::cin >> , std::getline() will see the leftover newline ('\n') in the buffer (from when the user pressed Enter)
    // and will immediately assume the user entered an empty string.

    // SOLUTION: Use the 'std::ws' input manipulator to discard any leading whitespace/newlines.
    std::getline(std::cin >> std::ws, fullName);

    // std::cin  ignores any leading whitespace and stops reading at the very first non-leading whitespace
    // std::getline(std::cin , fullName);  does not ignore any leading whitespace, it assumes user has entered empty string

    //--------------------------STRING LENGTH----------------------------
    // To get the length of a string, C++ provides a member function: .length()  (Eg. fullName.length())
    // but .length() returns an UNSIGNED integer(usually 64-bit on modern PCs), which can cause dangerous bugs during math operations or narrowing conversions when stored in a 32-bit int.

    // int len{ fullName.length()};             // on my pc, it's of type unsigned _int64, storing in int(32 bit) with brace initialisation cause narrowing conversion

    // So we should change its type using  static_cast<new_type>(name)
    int lenght1 {static_cast<int>( fullName.length())};

    // OR (C++20 and newer): Use std::ssize() to get the length as a safe signed integer.
    // int length { std::ssize(fullName) };     // on my pc, it's of type signed _int64, storing in int(32 bit) with brace initialisation cause narrowing conversion
    int length2 {static_cast<int>(std::ssize(fullName))};

    // OR use initialization other than brace initialization
    int length4 = fullName.length();        // ! Narrowing conversion occurs here

    // OR Use 'auto' so the compiler automatically assigns the exact correct signed type.
    auto length3 { std::ssize(fullName) };
    
    std::cout << "Your full name is: " << fullName << '\n';
    std::cout << "It contains " << length3 << " characters.\n";

    // NOTE: C++ strings ends with a hidden '\0' null terminator (used to tell the compiler about the string's end)
    // but .length() , std::ssize( ) only print actual visible characters.

    return 0;
}
