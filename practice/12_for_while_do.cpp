#include <iostream>

int main(){
    // for loop
    // Syntax: for ( initialisation ; condition ; updation){   body   }
    // Order: initialisation (one time only) --> condition check --> executing body --> updation --> repeat
    for(int i = 1 ; i <= 6 ; i++ ){
        std::cout << i << '\n';
    }

    std::cout << std::endl;

    // while loop
    int j = 1;
    while(j <= 6){
        std::cout << j << '\n';
        j++;
    }

    std::cout << std::endl;

    // do while loop - execute atleast one time as the condition is later
    int k = 1 ;
    do{
        std::cout << k << '\n';
        k++;
    } while (k <= 6);

    return 0;
}