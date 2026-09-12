#include <iostream>

int main(){
    int a = 4;

    // Reference variable is basically an alias(alternate name) given to an existing variable.
    int& b = a;
    std::cout << b << '\n';
    //Note: if value of b is changed (like by assignment) later, then value of a changes as b is reference to a, not independent

    float c = 8.8;

    // Type Casting
    std::cout << (int) c << '\n';     //or int(c)     C-style type casting, forcefully coverting, so dangerous

    int d = static_cast<int>(c);     //Safer type casting available in C++
    std::cout << d ;
    
    return 0;
}
