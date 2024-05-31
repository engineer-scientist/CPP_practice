/*
Q. 20. Write a C++ program to display an array after it is right-rotated K times.
Array rotation means shifting the elements K positions to left or right.
In this problem, you will have to rotate the array in the right direction K number of times.
For example:
arr[] = {10, 11, 7, 33, 5, 1};
K = 3
Output: Array after rotation: {33, 5, 1, 10, 11, 7}
*/

# include <iostream>

int main() {

	const int n = 10;
	int K;
	double arr1[n], arr2[n];

	std::cout << "This C++ program right-rotates an array (of " << n << " elements) K times. \n";
	std::cout << "Please enter the " << n << " elements of the array. They can be any real numbers. \n";
	for (int i = 0; i < n; i++) {
		std::cout << "Enter the array element at index " << i << ": ";
		std::cin >> arr1[i];
	}
	std::cout << "Thank you. \n Please enter K (the number of times that the array will be right-rotated). Please enter only a non-negative integer. \n";
	std::cin >> K;
	while (K < 0) {
		std::cout << "K can not be negative. Please enter a non-negative integer: ";
		std::cin >> K;
	}
	std::cout << "Thank you. \n The array after being right-rotated " << K << " times is displayed below. \n";

	K = K % n; // If K > n, then only the remainder in K / n is the effective number of array rotations.

	for (int i = 0; i < n; i++) {
		if (i < K)
			arr2[i] = arr1[n - K + i];
		else
			arr2[i] = arr1[i - K];
	}

	for (int i = 0; i < n; i++)
		std::cout << "\t" << arr2[i];

	return 0;
}
