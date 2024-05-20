/*
Q. 11. Write a Program to Check Whether a Number Is a Palindrome or Not.
A palindrome number is a number that is equal to itself even after reversing its digits. 
Example input and output: 
Enter a positive integer: 1231
1231 is not a palindrome number.
*/

# include <iostream>

int main() {
	int n, m, r = 0;
	
	std :: cout << "Please enter a non-negative integer: \n";
	std :: cin >> n;
	while (n < 0) {
		std :: cout << n << " is not a non-negative integer. \n Please enter a non-negative integer: \n";
		std :: cin >> n;
	}
	
	m = n;
	
	while (m > 0) {
		r = (10 * r) + (m % 10);
		m = m / 10;
	}
	
	if (n == r)
		std :: cout << n << " is a palindrome integer. \n";
	else
		std :: cout << n << " is not a palindrome integer. \n";

	return 0;
}
