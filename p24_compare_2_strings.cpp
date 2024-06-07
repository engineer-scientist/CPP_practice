/*
Q24. Write a C++ program to compare two strings.
In this problem, you have to write a program to compare two strings to check whether they
are the same or not.
For Examples:
str1 = "Geeks"
str2 = "geeks"
Output: str1 and str2 are not equal.
*/

# include <iostream>
# include <string>

int main() {
	std::string s1, s2;

	std::cout << "This C++ program takes two strings as input, compares them, and then displays if the two strings are equal or not. \n";
	std::cout << "\n Please enter the first string: \n";
	std::getline(std::cin, s1);
	std::cout << "\n Please enter the second string: \n";
	std::getline(std::cin, s2);
	std::cout << "\n Thank you. The first string is \n" << s1 << "\n and the second string is \n" << s2 << "\n\n";
	
	if (s1 == s2)
		std::cout << "Yes, these two strings are equal. \n";
	else
		std::cout << "No, these two strings are not equal. \n";

	return 0;
}
