/*
Q. 6. Write a C++ program to find compound interest.
For example: 
Inputs:
principal = $ 25000, 
rate = 12 %, 
time = 5 years.
Output: 
compound interest = $ 19058.54.
*/

# include <iostream>
# include <cmath>

int main() {
	double principal, rate, time, amount, compound_interest;
	
	std :: cout << "Enter principal (in dollars): ";
	std :: cin >> principal;
	while (principal < 0) {
		std :: cout << "Principal can not be negative. Please enter a non-negative number: ";
		std :: cin >> principal;
	}
	
	std :: cout << "Enter rate (in percent): ";
	std :: cin >> rate;
	while (rate < 0) {
		std :: cout << "Rate can not be negative. Please enter a non-negative number: ";
		std :: cin >> rate;
	}
	
	std :: cout << "Enter time (in years): ";
	std :: cin >> time;
	while (time < 0) {
		std :: cout << "Time can not be negative. Please enter a non-negative number: ";
		std :: cin >> time;
	}
	
	amount = principal * pow(1 + (rate / 100), time);
	
	// Rounding the amount to 2 decimal places: 
	// amount = round(amount * 100) / 100;
	
	compound_interest = amount - principal;
	
	std :: cout << "Amount = $ " << amount << ". \n";
	std :: cout << "Compound interest = $ " << compound_interest << ". \n";
	
	return 0;
}