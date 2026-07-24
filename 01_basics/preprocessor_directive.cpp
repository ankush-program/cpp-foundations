#include <iostream> // preprocessor copy-paste standard iostream library
#define PI 3.14 // macro substitution: assign 3.14 to PI

void CI(){ 
    #define CI // macro substitution: assign "" to CI
}

int main(){  
    // when a macro identifier is used within another preprocessor command ,macro substitution does not occur within it
    #ifdef PI // if PI #define above, then this block of code compile until matching #endif, alternative #if defined(PI)
    
    std::cout<<"pi"<<'\n'<<PI<<'\n';
    #endif

    #ifndef CI // opposite to #ifdef , alternative #if !defined(PI)
    std::cout<<"CI";
    #endif

    #if 0 //code will not compile until matching #endif
    std::cout<<"0";
    #endif

    #if 1 //opposite to #if 0
    std::cout<<"1";
    #endif
    return 0;
}
