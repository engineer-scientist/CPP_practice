/*
Q. 14. Write a C++ program to display the Fibonacci number at index N using recursion.
(The Fibonacci Series is a mathematical sequence in which the next number is the sum of the
last two numbers in the sequence. In this program, you will have to print the Nth number in
the sequence using recursion.)
Example input and output:
Enter the index of the Fibonacci series element to display: 
12
The Fibonacci element at index 12 is 144.
*/

# include <iostream>

struct ABC {
	int a, b, c;
};

ABC fibonacci(int pa, int pb, int pc, int i, int n) {

	ABC abc;

	abc.a = pa;
	abc.b = pb;
	abc.c = pc;

	if (i < n) {
		pa = pb;
		pb = pc;
		pc = pa + pb;
		i = i + 1;
		abc = fibonacci(pa, pb, pc, i, n); // Recursion (function fibonacci is calling itself).
	}

	return abc;
}

int main() {
	ABC abc;
	int n, a = 0, b = 1, c = 1, i = 0;
	std::cout << "Please enter the index of the Fibonacci series element to display. Please enter only a non-negative integer. \n";
	std::cin >> n;
	while (n < 0) {
		std::cout << "The number entered is not a non-negative integer. Please enter a non-negative integer. \n";
		std::cin >> n;
	}

	abc = fibonacci(a, b, c, i, n);

	std::cout << "Thank you. \n The Fibonacci element at index " << n << " is " << abc.a << ". \n";

	return 0;
}
