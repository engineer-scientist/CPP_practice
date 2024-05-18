/*
Q3. Write a Program to Print the ASCII Value of a Character.
For example:
Character =  A
Output: ASCII Value of 'A' = 65
*/

# include <iostream>

int main() {
	char c;
	std :: cout << "Enter a character: ";
	std :: cin >> c;
	std :: cout << "The ASCII value of character \'" << c << "\' is " << int(c) << ".";
	return 0;
}
