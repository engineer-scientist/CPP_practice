/*
Q23. Write a C++ rogram to find the length of a string.
The length of the string is the number of characters in a string except the NULL character.
For Example,
str = "GeeksforGeeks"
Output: Length of str = 13
*/

# include <iostream>
# include <string>

int main() {
	std :: string str;

	std::cout << "Enter a string: \n";
	std::getline(std::cin, str);
	std::cout << "The entered string is displayed below: \n";
	std::cout << str << "\n";
	std::cout << "Length of the entered string is " << str.size() << " characters. \n";

	return 0;
}
