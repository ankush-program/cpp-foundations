#include <iostream>

int var{11};    // Global variable

//global variable and local variable can have same name in a cpp program.
//but in such case, precedence will be given to local variable.

void func(){
    std::cout << var << '\n';
    int var{23};    // Local variable in func Function
    std::cout << var << '\n';   //Local variable has more precedence than global variable
}
int main(){
    std::cout << var << '\n';
    func();
    std::cout << var << std::endl;
    //'\n' or endl used for printing newline
    //'\n' only prints newline. endl prints newline along with flushing input buffer

    int var{9};    // Local variable in func Function
    std::cout << var << '\n';   //Local variable has more precedence than global variable

    //To use global varaible even in the presence of local variable, use ::(scope resolution operator)
    std::cout << ::var;
    return 0;
}