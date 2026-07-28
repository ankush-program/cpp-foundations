#include <iostream>
#include <limits>

double getUserinput(){
	double num{};
	while (!(std::cin>>num)){
        std::cout<<"Invalid Input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } 
	return num;
}

double increment(double initial_salary,double monthly_increment_percentage, int months){
	for (int i=1; i<=months ;i++){
		initial_salary = initial_salary + initial_salary*monthly_increment_percentage/100;
	}
	return initial_salary;
}

int main(){
	std::cout<<"Enter per month initial_salary: ";
	double initial_salary{getUserinput()};

	std::cout<<"Enter monthly_increment_percentage (out of 100 percent): ";
	double monthly_increment_percentage{getUserinput()};

	std::cout<<"Enter months: ";
	double months{getUserinput()};

	std::cout<<"Per month Salary after "<<months<<" months: "<<increment(initial_salary, monthly_increment_percentage, months);
	return 0;
}
