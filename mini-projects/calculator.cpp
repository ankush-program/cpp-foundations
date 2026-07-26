#include <iostream>

double input_num(){
	std::cout<<"Enter an number: ";
	double num{};
	std::cin>> num;
	return num;
}

int main(){
	std::cout<<"-----------Calculator Program------------\n";
	double num1{input_num()};
	double num2{input_num()};
	std::cout<<"-----------Select Operator(+,-,*,/)-----------\n";
	char oper{};
	std::cin>> oper;
	std::cout<<"Result: ";

	if (oper == '+'){
		std::cout << num1 <<" "<< oper <<" "<< num2 << " = " << num1 + num2;
	}else if(oper =='-'){
		std::cout<< num1 <<" " << oper <<" "<< num2 << " = " << num1 - num2;
	}else if (oper =='*'){
		std::cout<< num1 <<" "<< oper << " "<< num2<< " = " << num1 * num2;
	}else if(oper =='/'){
		if ( num2 != 0)	{	
			std::cout<< num1 <<" "<< oper << " "<< num2 << " = " << num1 / num2;
		} else{
			std::cout<<"Division by Zero is undefined.";
		}
	}else {
		std::cout<<"None of these operators(+,-,*,/) found. Program exited";
	}
	return 0;
}
