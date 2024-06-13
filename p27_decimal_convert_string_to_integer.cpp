/*
Q. 27. Write a C++ program to convert a number from string to int data type.
For example:
str = "69420"
Output: Number = 69420
*/

# include <iostream>
# include <string>

bool decimal_validity_check(std::string str) {
    
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] != '0') && (str[i] != '1') && (str[i] != '2') && (str[i] != '3')
			&& (str[i] != '4') && (str[i] != '5') && (str[i] != '6') && (str[i] != '7') 
		&& (str[i] != '8') && (str[i] != '9'))
            return false;
	}

	return true;
}

int convert_string_to_decimal(std::string str) {
    int n = 0, d = 0;
    char c;
    for (int i = 0; i < str.size(); i++) {
        c = str[i];
        switch(c) {
			case '0': d = 0;
			break;
			case '1': d = 1;
			break;
			case '2': d = 2;
			break;
			case '3': d = 3;
			break;
			case '4': d = 4;
			break;
			case '5': d = 5;
			break;
			case '6': d = 6;
			break;
			case '7': d = 7;
			break;
			case '8': d = 8;
			break;
			case '9': d = 9;
			break;
			default: return -2;
		}
        n = (10 * n) + d;
    }
    return n;
}

int main() {
    std::string str;

    std::cout << "This C++ program converts a decimal string from string to numerical form. \n";
    std::cout << "Please enter a string corresponding to a positive decimal integer. (Please enter from only characters 0 1 2 3 4 5 6 7 8 9.) \n";
    std::getline(std::cin, str);
    bool valid_decimal = decimal_validity_check(str);
    while (valid_decimal == false) {
        std::cout << "Entered string does not correspond to a valid positive decimal integer. Please enter a string with characters only from 0 1 2 3 4 5 6 7 8 9: \t";
        std::getline(std::cin, str);
        valid_decimal = decimal_validity_check(str);
    }
    std::cout << "Thank you. \n";

    int n = convert_string_to_decimal(str);

    if (n == -2)
        std::cout << "Error occured. \n";
    else
        std::cout << "After string to numeric conversion, the value obtained is " << n << ". \n";

    return 0;
}
