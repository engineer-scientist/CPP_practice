/*
Q. 12. Write a Program to Make a Simple Calculator.
Example input and output:
Enter the first number: 10
Enter the second number: 25
Enter:
a for addition,
s for substraction,
m for multiplication,
d for division.
m
250
*/

# include <iostream>

int main() {

	double n1, n2;
	char choice, exit = 'n';

	while (exit != 'y') {
		std::cout << "Enter the first number: ";
		std::cin >> n1;

		std::cout << "Enter the second number: ";
		std::cin >> n2;

		std::cout << "Enter: \n a for addition, \n s for substraction, \n m for multiplication, \n d for division. \n";
		std::cin >> choice;

		switch (choice) {
			case 'a':
				std::cout << n1 << " + " << n2 << " = " << n1 + n2 << ". \n";
				break;
			case 's':
				std::cout << n1 << " - " << n2 << " = " << n1 - n2 << ". \n";
				break;
			case 'm':
				std::cout << n1 << " * " << n2 << " = " << n1 * n2 << ". \n";
				break;
			case 'd':
				if (n2 != 0)
					std::cout << n1 << " / " << n2 << " = " << n1 / n2 << ". \n";
				else
					std::cout << n1 << " / " << n2 << " = not defined (because denominator is 0). \n";
				break;
			default:
				std::cout << "Invalid option entered. \n";
		}

		std::cout << "Enter y to exit the calculator. Enter any other letter to rerun the calculator. \n";
		std::cin >> exit;
	}
	return 0;
}
