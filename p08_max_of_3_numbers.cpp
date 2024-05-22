/*
Q8. Write a Program to Find the Largest Among 3 Numbers.
Example input and output: 
Given Numbers: a = 10, b = 21 and c = 4.
Output: b is the largest.
*/

# include <iostream>

int main() {
	double a, b, c, m;
	std :: cout << "Enter the first number: ";
	std :: cin >> a;
	std :: cout << "Enter the second number: ";
	std :: cin >> b;
	std :: cout << "Enter the third number: ";
	std :: cin >> c;
	m = std :: max(std :: max(a, b), c);
	std :: cout << "The maximum of these three numbers is " << m << ". \n";
	return 0;
}
