#include <iostream>
#include <iomanip>

int main(){
    std::cout<< "Size of float is: "<< sizeof(float)<<" Bytes"<< '\n';
    std::cout<< "Size of double is: "<< sizeof(double)<<" Bytes"<< "\n\n";


    float x{0.00f};  //float is always signed
    std::cout<< "Outputing 0.00f float: "<< x <<'\n';

    double y{0.00};  //double is always signed
    std::cout<< "Outputing 0.00 double: "<< y <<'\n';


    // cout cap visual presentation to 6 significant digits. so both double and float will out same.
    float x2{9876543.2166666666666666666f};  //float keeps 6-9 significant digits, but cout outputs to 6 significant digits
    std::cout<< "Outputing 9876543.2166666666666666666f float: "<< x2 <<'\n';

    double y2{9876543.2166666666666666666};  //double keeps 15-17 significant digits, but cout outputs to 6 significant digits
    std::cout<< "Outputing 9876543.2166666666666666666 double: "<< y2 <<'\n';


    std::cout<< std::setprecision(20);
    std::cout<<"AFter seting precision\n";
    std::cout<< "Outputing 9876543.2166666666666666666f float: "<< x2 <<'\n';
    std::cout<< "Outputing 9876543.2166666666666666666 double: "<< y2 <<'\n';

    
    std::cout<< 9.22 <<'\n';    // By default, System understands it as double
    std::cout<< 9.22f <<'\n';   // System understands it a float

    return 0;
}
