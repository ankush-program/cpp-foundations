#include <iostream>

int main(){
    // 0 for false , 1 for true
    bool x{};           // direct list initialisation to 0, alternate bool x{0}; , alternate bool x{false};
    bool y{true};       // alternate bool y{1};
    std::cout<< x << y << true << false<<"\n";

    bool a{!1};         // !operator changes 1 to 0 and vice versa
    bool b{!false};     //false being changed to true
    std::cout<< a << b << !true << !false<<"\n";

    // !(int) is being changed to 0 , !0 is being changed to 1
    bool c{!3};         // !3 is being changed to 0
    bool d{!10.3};      // !10.3 is being changed to 0
    //but bool d{10}; will throw compiler error because this will force compiler to compress 10 to 1 ( narrowing conversions)
    //but narrowing conversions is not allowed in direct-list initialisation
    //we can do this by other initialisation methods like copy initialisation, direct initialisation
    bool e = 6;         // 6 converted to 1 by narrowing conversion
    std::cout<< c << d << e  <<"\n";

    bool f{};
    std::cout<<"Please enter a number: ";
    // if input is not an integer or other than 0 or 1, then narrrowing conversion to 1 takes place(because of copy assignment of cin),
    // and std::cin also goes in failbit state taking no other input in the next section of the code.
    std::cin>> f ;
    std::cout <<"You entered: "<< f << '\n';


    //using true, false instead of  0, 1
    std::cout<< std::boolalpha;     //make output as true, false instead of  0, 1
    std::cout<< c << d << e <<"\n";

    bool g{};
    std::cout<< "Please Enter true/false: ";
    std::cin>> std::boolalpha;      //now take input input as true , false ( case sensitive)

    // if input is not true or false, it will assign false 
    // and std::cin goes in failbit state taking no other input in the next section of the code.
    std::cin>> g;
    std::cout<<"You entered: "<< g;

    //stop using true,false for input,output and start using 0, 1 again
    std::cout<< std::noboolalpha;
    std::cin>> std::noboolalpha;
    return 0;
}