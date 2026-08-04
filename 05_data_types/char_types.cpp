#include <iostream>
#include <limits> // for std::numeric_limits

int main(){
    //char is an integral type, it stores value as integer and then manipulates it according to ASCII.By default, a char may be signed or unsigned.
    //ASCII defines a particular way to represent english characters, symbols as numbers between 0 to 127.
    //Eg. code 65 for 'A' , code 97 for 'a' , code 48 for '0'
    // 0 to 31 and 127 are unprintable chars, if we try to print them,output depends on OS, othersare printable.

    std::cout<<"Size of char is: "<<sizeof(char)<<" Bytes\n";
    char a{'a'};    //Alternate, char{97};  -not recommended
    std::cout<< a << 'B' <<'\n';    // can be output directly

    // inputing char
    std::cout<<"Enter a char: ";
    char b{};
    std::cin>> b;   //char can only contain character, other remains in input buffer
    std::cout<<"You entered: "<< b <<'\n';

    //Both are different. both will output deifferent.
    char c{'9'};    // initialised with ASCII code 57 with value 9
    char d{9};      // initialised with ASCII code 9


    //char can't contain whitespaces, so address this issue, use std::cin.get();
    std::cin.clear();   //reset internal error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');   //Clear the full input Buffer(containing leftover like newline)
    std::cout<<"Enter something: ";
    char e{};
    std::cin.get(e);    //takes one charcter(number, letter, whitespaces any) as input 
    std::cout<<"You entered: "<< e<<'\n';

    //Standard char (ASCII) only covers basic English characters. To support global languages and symbols, other character encoding standards like Unicode were introduced with over 144,000 characters.
    // C++ has specific types for Unicode (which requires more memory):
    // char8_t : For 8-bit Unicode (UTF-8), char16_t : For 16-bit Unicode (UTF-16), char32_t : For 32-bit Unicode (UTF-32).
    // Only use these if specifically building a multi-language program.
    // Avoid 'wchar_t'. Its size changes depending on the system, making it unpredictable (unless specifically working with Windows APIs).
    return 0;
}
