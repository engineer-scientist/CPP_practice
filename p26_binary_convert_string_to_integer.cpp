/*
Q. 26. Write a C++ program to convert a string representation of a binary integer to the numeric value.
For example,
str = "101011";
Output: Binary Number = 101011
*/

# include <iostream>
# include <string>

bool binary_validity_check(std::string str) {
    
    for (int i = 0; i < str.size(); i++)
        if ((str[i] != '0') && (str[i] != '1'))
            return false;
    
    return true;
}

int convert_string_to_binary(std::string str) {
    int n = 0, d = 0;
    char c;
    for (int i = 0; i < str.size(); i++) {
        c = str[i];
        if (c == '1')
            d = 1;
        else if (c == '0')
            d = 0;
        else
            return -2;
        n = (10 * n) + d;
    }
    return n;
}

int main() {
    std::string str;

    std::cout << "This C++ program converts a binary string from string to numerical form. \n";
    std::cout << "Please enter a string corresponding to a positive binary integer. (Please enter 0 and 1 characters only.) \n";
    std::getline(std::cin, str);
    bool valid_binary = binary_validity_check(str);
    while (valid_binary == false) {
        std::cout << "Entered string does not correspond to a valid positive binary integer. Please enter a string with only 0 and / or 1 characters: ";
        std::getline(std::cin, str);
        valid_binary = binary_validity_check(str);
    }
    std::cout << "Thank you. \n";

    int n = convert_string_to_binary(str);

    if (n == -2)
        std::cout << "Error occured. \n";
    else
        std::cout << "After string to numeric conversion, the value obtained is " << n << ". \n";

    return 0;
}
