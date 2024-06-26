/*
Q. 16. Write a C++ program to check if two arrays are equal or not.
(Two arrays are said to be equal if the elements at the given index are equal in both arrays.
In this program, you have to take two arrays, and then check whether the two arrays are equal.)
For example:
arr1[] = {5, 8, 3};
arr2[] = {5, 8, 11, 2};
Output: arr1[] and arr2[] are not equal.
*/

# include <iostream>

int main() {
    const int n = 10;
    /*
    std::cout << "Enter the number of elements in the first array: \n";
    std::cin >> n1;
    */

    std::cout << "This C++ program compares two arrays of " << n << " elements each, and then displays if the two arrays are equal or not equal. \n";

    double arr1[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the first array's element at index " << i << ": ";
        std::cin >> arr1[i];
    }
    std::cout << "Thank you. \n";

    /*
    std::cout << "Enter the number of elements in the second array: \n";
    std::cin >> n2;
    */
    double arr2[n];
    for (int j = 0; j < n; j++) {
        std::cout << "Enter the second array's element at index " << j << ": ";
        std::cin >> arr2[j];
    }
    std::cout << "Thank you. \n";

    bool equal = true;

    /*
    if (n1 != n2)
        equal = false;
    else
    */
    for (int k = 0; k < n; k++)
        if (arr1[k] != arr2[k]) {
            equal = false;
            break;
        }

    if (equal)
        std::cout << "The two arrays are equal. \n";
    else
        std::cout << "The two arrays are not equal. \n";

    return 0;
}
