/*
Q. 25. Write a C++ program to check if the input string is a palindrome.
A palindrome string is a string that is equal to its reverse.
For example:
str = "naman"
Output: str is a palindrome string.
*/

# include <iostream>
# include <string>

int main() {
	std::string str = "", reverse_str = "";

	std::cout << "This C++ program takes a string as input, checks if this string is a palidrome, and displays the result. \n";
	std::cout << "(A palindrome is a string equal to its reverse.) \n";
	
	std::cout << "\n Enter a string: \n";
	std::getline(std::cin, str);
	
	std::cout << "\n The entered string is: \n";
	std::cout << str << "\n";

	for (int i = str.length() - 1; i >= 0; i--)
		reverse_str = reverse_str + str[i];

	std::cout << "\n The reversed string is: \n";
	std::cout << reverse_str << "\n";

	if (str == reverse_str)
		std::cout << "\n Yes, the given string is a palindrome, because it is equal to its reverse. \n";
	else
		std::cout << "\n No, the given string is not a palindrome, because it is not equal to its reverse. \n";

	return 0;
}
