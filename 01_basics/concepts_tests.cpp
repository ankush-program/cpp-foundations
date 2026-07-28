#include <iostream> // includes the standard input output library

int main(){
    std::cout<<"Hello World"; // from namespace std , cout is choosen using :: (scope resolution operator)

    int x; //default initialisation
    x = 6; //copy assisgnment

    /* int x = 3; //copy initialisation
    int x(4); //direct initialisation
    int x{7}; //direct list initialisation
    int x = {7}; //copy list initialisation   
    int x; //value initialisation 
    */
    return 0;
}
