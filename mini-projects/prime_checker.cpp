#include <iostream>

int main(){
    std::cout << "---------------Prime Number Checker (upto 120)---------------\n";
    
    std::cout << "Enter a number (upto 120): ";
    int num{};
    
    if (!(std::cin >> num)) {
        std::cout << "Invalid input! Please enter a whole number.\n";
        return 0;
    }
    
    std::cout <<"You entered: " << num << "\n\n";

    if ( num <= 1) std::cout<< num <<" is not prime";
    else if ( num > 120) std::cout << num << " is Out of Range for this checker";
    else if (num == 2 || num == 3 || num == 5 || num == 7) std::cout<< num <<" is prime";
    else if ( num%2 == 0 || num%3 == 0 || num%5 == 0 || num%7 == 0 ) std::cout<< num << " is not prime";
    else std::cout << num <<" is prime";

    return 0;
}
