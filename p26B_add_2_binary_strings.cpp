/*
Q. 26B. Write a C++ program to add two binary strings.

Conversion between decimal and binary numbers:
0 - 0
1 - 1
2 - 10
3 - 11
4 - 100
5 - 101
6 - 110
7 - 111
8 - 1000
9 - 1001
10 - 1010
*/

# include <iostream>
# include <string>
# include <cmath>

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

int binary_to_decimal(int b) {
    int d = 0, i, p = 0;
    while (b > 0) {
        i = b % 10;
        b = b / 10;
        d = d + (pow(2, p) * i);
        p = p + 1;
    }
    return d;
}

int decimal_to_binary(int d) {
    int b = 0, i, p = 0;
    while (d > 0) {
        i = d % 2;
        d = d / 2;
        b = b + (pow(10, p) * i);
        p = p + 1;
    }
    return b;
}

int binary_sum(int b1, int b2) {
    int d1 = binary_to_decimal(b1), d2 = binary_to_decimal(b2);
    return decimal_to_binary(d1 + d2);
}

int main() {
    std::string str1, str2;
    int n1, n2, s;
    bool valid_binary;

    std::cout << "This C++ program takes two binary strings as inputs, converts the binary strings to integers, adds them, and displays the sum. \n";
    std::cout << "Please enter the first string corresponding to a positive binary integer. (Please enter 0 and 1 characters only.) \n";
    std::getline(std::cin, str1);
    valid_binary = binary_validity_check(str1);
    while (valid_binary == false) {
        std::cout << "Entered string does not correspond to a valid positive binary integer. Please enter a string with only 0 and / or 1 characters: ";
        std::getline(std::cin, str1);
        valid_binary = binary_validity_check(str1);
    }

    n1 = convert_string_to_binary(str1);
    std::cout << "Thank you. The input is " << n1 << ".\n\n";

    std::cout << "Please enter the second string corresponding to a positive binary integer. (Please enter 0 and 1 characters only.) \n";
    std::getline(std::cin, str2);
    valid_binary = binary_validity_check(str2);
    while (valid_binary == false) {
        std::cout << "Entered string does not correspond to a valid positive binary integer. Please enter a string with only 0 and / or 1 characters: ";
        std::getline(std::cin, str2);
        valid_binary = binary_validity_check(str2);
    }

    n2 = convert_string_to_binary(str2);
    std::cout << "Thank you. The input is " << n2 << ".\n\n";

    if ((n1 == -2) || (n2 == -2))
        std::cout << "Error occured. \n";
    else {
        s = binary_sum(n1, n2);
        std::cout << "After string to numeric conversion, followed by addition, the sum obtained is " << s << ". \n";
    }

    return 0;
}
