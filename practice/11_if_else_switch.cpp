#include <iostream>

int main(){
    std::cout << "Enter a number: ";
    int num1{};
    std::cin >> num1;

    std::cout << "Enter another number: ";
    int num2{};
    std::cin >> num2;

    // if else
    if(num1 > num2){
        std::cout << num1 << ">" << num2 << '\n';
    } else if (num1 < num2){
        std::cout << num1 << "<" << num2 << '\n';
    } else {
        std::cout << num1 << "=" << num2 << '\n';
    }

    // switch
    switch (num1){
        case 1:
            std::cout << "num1 is one";
            break;    //if we don't use break;, then it will execute all next cases without even looking at their case value
        case 2: {
            std::cout << "num1 is two";
            break;
        }
        case 3: 
            std::cout << "num1 is three";
            break;
        case 4:
            std::cout << "num1 is four";
            break;
        default: 
            std::cout << "num1 is greater than 4";
            break;
    }
    return 0;
}
