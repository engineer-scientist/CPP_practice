/*
Q. 7. Write a program to check for even or odd integers.
Example input and output: 
Enter an integer: 28
28 is an even integer.
*/

# include <iostream>

int main() {
	int n;
	std :: cout << "Enter an integer: ";
	std :: cin >> n;
	if (n % 2 == 0)
		std :: cout << n << " is an even integer. \n";
	else
		std :: cout << n << " is an odd integer. \n";
	return 0;
}
