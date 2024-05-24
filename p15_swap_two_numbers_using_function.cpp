/*
Q15. Write a Program to Swap Two Numbers Using a Function.
In this program, you have to swap the values of two variables using another function.
For Example,
In main function:
a = 10, b = 22
Output: a = 22, b = 10
*/

# include <iostream>

struct AB {
	double a, b;
};

AB swap(double a, double b) {
	AB ab;
	ab.a = b;
	ab.b = a;
	return ab;
}

int main() {
	double a, b;
	std :: cout << "Enter the first number (variable a): \n";
	std :: cin >> a;
	std :: cout << "Enter the second number (variable b): \n";
	std :: cin >> b;
	AB ab = swap(a, b);
	a = ab.a;
	b = ab.b;
	std :: cout << "After swapping in function: \n";
	std :: cout << "a = " << a << ", \n";
	std :: cout << "b = " << b << ". \n";
	return 0;
}
