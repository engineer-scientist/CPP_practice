/*
Q9. Write a Program to Check if a Given Year Is a Leap Year.
Example input and output:
Enter a year: 2020
2020 is a Leap Year.
*/

# include <iostream>

int main() {
	int year;
	std :: cout << "Enter a year (must be an integer): ";
	std :: cin >> year;
	if (year % 100 == 0) {
		if (year % 400 == 0)
			std :: cout << "The year " << year << " is a leap year. It is also a century year. \n";
		else
			std :: cout << "The year " << year << " is not a leap year. But it is a century year. \n";
	}
	else {
		if (year % 4 == 0)
			std :: cout << "The year " << year << " is a leap year. But it is not a century year. \n";
		else
			std :: cout << "The year " << year << " is neither a leap year nor a century year. \n";
	}
	return 0;
}
