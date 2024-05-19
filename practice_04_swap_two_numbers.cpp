/*
Q4. Write a Program to Swap Two Numbers.
For example: 
Variables initally:
a = 10, b = 250.
After execution:
Output: a = 250, b = 10.
*/

# include <iostream>

int main() {
	double a, b, temp;
	std :: cout << "Enter variable a: ";
	std :: cin >> a;
	std :: cout << "Enter variable b: ";
	std :: cin >> b;
	std :: cout << "Before swapping, a = " << a << " and b = " << b << ". \n";
	temp = b;
	b = a;
	a = temp;
	std :: cout << "After swapping, a = " << a << " and b = " << b << ". \n";
	return 0;
}