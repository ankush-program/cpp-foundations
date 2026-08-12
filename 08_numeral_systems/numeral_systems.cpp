#include <bitset>       // for std::bitset
#include <format>       // C++20 feature
#include <print>        // C++23 feature
#include <iostream>     // for std::cout, std::oct, std::hex, std::dec

int main(){
    std::cout<<"-------------- DECIMAL ---------------\n";
        // (Base-10): There are 10 Digits ( 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ) to represent numbers.
        // In our everyday life, we use Decimal Numeral System.
        // By Default, C++ uses Decimal numeral system.
        int a { 91 };
        std::cout << "Literal (91) in Decimal: "<< a << '\n';

    // We can use Digit Separator (') to make numbers easy to read for us, compiler will safely ignore these.

   
    std::cout<<"\n--------------- OCTAL ----------------\n";
        // (Base-8): 8 Digits ( 0, 1, 2, 3, 4, 5, 6, 7 )
        // Use a '0' (zero) prefix for octal literals.

        int d { 061 };
        std::cout << "Literal (061) in Decimal:"<< d << '\n';

        // std::oct changes the output stream to Octal. All next outputs will be in octal until changed back.
        std::cout << std::oct;

        std::cout << "Literal (061) in Octal: "<< d << '\n';

        std::cout << std::dec;              // Changing the output back to decimal


    std::cout<<"\n------------- HEXADECIMAL ------------\n";
        // (Base-16): 16 Digits ( 0 to 9, A, B, C, D, E, F )
        // Use the '0x' prefix for hexadecimal literals.

        int e { 0x91F };
        std::cout << "Literal (0x91F) in Decimal: "<< e << '\n';

        // std::hex changes the output stream to Hexadecimal.
        std::cout << std::hex;
        std::cout << "Literal (0x91F) in Hex: "<< e << '\n';

        std::cout << std::dec;              // Changing the output back to decimal
        
        
        std::cout<<"\n--------------- BINARY ---------------\n";
        // (Base-2): 2 Digits ( 0, 1 )
        // Use the '0b' prefix for binary literals.

        int b { 0b0000'1011 };  
        std::cout << "Literal (0b0010'1011) in Decimal: " << b << '\n';

        // C++ doesn't have a std::bin to print binary numbers directly. std::bitset solves this.
        // The number inside the angle brackets <8> tells it how many bits to print.
        // It will automatically add leading zeros in the output to make sure exactly 8 bits are displayed on the screen.
        std::bitset<8> c{0b1011};
        std::cout << "Printed using std::bitset<8>: " << c << '\n';

        // Creating a temporary std::bitset and print it
        std::cout << "Printed directly using std::bitset<8>: " << std::bitset<8> {0b0010'1011} << '\n';

        // ---------------- C++20 & C++23 FEATURES ----------------
        // std::format (C++20) format strings easily. 
        // "{:b}" means "print the variable in binary".
        std::cout << "\nUsing C++20 std::format:\n";
        std::cout << std::format("{:b}\n", 0b1001); 
        
        // "{:#b}" means "print in binary AND include the '0b' prefix".
        std::cout << std::format("{:#b}\n", 0b1001); 
        
        std::cout << std::format("{:b} {:#b}\n", 0b1001, 0b1001); 

        // std::println (C++23) is the newest, easiest way to print. 
        // It works like std::format but automatically prints to the screen and adds a newline at the end!
        std::cout << "\nUsing C++23 std::println:\n";
        std::println("{:b} {:#b}", 0b01'0101, 0b1001);
    return 0 ;
}