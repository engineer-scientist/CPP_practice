/*
Q5. Write a Program to Find the Size of int, float, double, and char.
Output: 
size of int: 10 bytes
size of float: 20 bytes
size of double: 30 bytes
size of char: 40 bytes
*/

# include <iostream>

int main() {
	std :: cout << "Size of int: " << sizeof(int) << " bytes. \n";
	std :: cout << "Size of float: " << sizeof(float) << " bytes. \n";
	std :: cout << "Size of double: " << sizeof(double) << " bytes. \n";
	std :: cout << "Size of char: " << sizeof(char) << " bytes. \n";
	return 0;
}
