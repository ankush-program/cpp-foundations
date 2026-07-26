#include <iostream>

double getUserinput(){
	double num{};
	std::cin>>num;
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
	int months{};
	std::cin>>months;

	std::cout<<"Per month Salary after "<<months<<" months: "<<increment(initial_salary, monthly_increment_percentage, months);
	return 0;
}
