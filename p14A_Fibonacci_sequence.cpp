/*
Program to display the first N numbers of the Fibonacci sequence.
(The Fibonacci sequence is a mathematical sequence in which a number is the sum of the 
previous two numbers.) 
Input and output example:
Enter the number of elements in the Fibonacci sequence to display: 
15
The first 15 elements of the Fibonacci sequence are: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377,  
*/

# include <iostream>

int main() {
	int n, a = 0, b = 1, c = 1;
	std :: cout << "Enter the number of elements in the Fibonacci sequence to display: \n";
	std :: cin >> n;
	std :: cout << "The first " << n << " elements of the Fibonacci sequence are: \n";
	for (int i = 0; i < n; i++) {
		std :: cout << a << ", ";
		a = b;
		b = c;
		c = a + b;
	}
	return 0;
}
