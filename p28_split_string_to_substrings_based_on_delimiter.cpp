/*
Q, 28. Write a C++ program to split a given string into a number of sub-strings based on some delimiter.
It is also called tokenization.
For example:
str = "Welcome Geeks to the GeeksforGeeks portal."
Output:
Welcome
Geeks
to
the
GeeksforGeeks
portal.
*/

# include <iostream>
# include <string>

int main() {
	std::string str, delimiter;

	std::cout << "This C++ program takes a string and delimiter character as inputs, splits the string to sub-strings based on the delimiter, and displays the sub-strings as outputs. \n\n";

	std::cout << "Enter the input string: \n";
	// std::cin >> str; // This accepts only the string from beginning to a whitespace character, as input.
	std::getline(std::cin, str); // This accepts the whole string as input.
	std::cout << "\n The input string is: \n" << str << "\n\n";

	std::cout << "Enter the delimiter character. (Please enter a single character only.) \n";
	std::getline(std::cin, delimiter); // To accept a whitespace character as input. 
	// std::cin >> delimiter; // This can accept all characters except whitespace characters.
	while (delimiter.size() > 1) {
		std::cout << "You entered multiple characters as delimiter. Please enter a single character: ";
		std::getline(std::cin, delimiter);
	}
	std::cout << "\n The delimiter character is: \n" << delimiter << "\n\n";

	int a = 0, l = 0;

	std::cout << "\n Based on the given delimiter, the sub-strings of the given string are below: \n";

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == delimiter[0]) || (i == str.size() - 1)) {
			l = i - a;
			if (i == str.size() - 1)
				l = l + 1;
			std::cout << str.substr(a, l) << "\n";
			a = i;
		}
	}

	return 0;
}
