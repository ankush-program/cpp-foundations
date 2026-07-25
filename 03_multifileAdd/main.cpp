#include "io.h"

int main(){
    double num1{readNumber()};
    double num2{readNumber()};

    writeAnswer(num1 + num2);
    return 0;
}
