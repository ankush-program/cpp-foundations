#include <iostream>

void change(int* p){
    *p = 10;    //we can also change the value of a through dereferencing even in other function without having direct access of it
}
int main(){
    // Pointer is a variable which is used to store the address of other variable.
    int a = 0;
    std::cout<< a << '\n';
    std::cout<< &a << '\n';     // &a --> address of a

    int* p = &a;    // p is a pointer which holding the address of a and the address has data in int data type
    // * --> used to tell that its a pointer variable

    std::cout << p << '\n';     // p  --> stores the address of a

    // Dereferencing
    // *p --> accessing the value stored on the address stored in pointer p
    std::cout << *p << '\n';

    *p = 2;     // we can change the value of a by accessing it through dereferencing
    std::cout<< a << '\n';

    change(&a);
    std::cout<< a << '\n';

    return 0;
}
