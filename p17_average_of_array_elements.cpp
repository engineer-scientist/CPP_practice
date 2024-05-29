/*
Q. 17. Write a C++ program to calculate the average of all the elements present in an array.
For example:
arr[] = {10, 22, 45, 11};
Output: Average = 22
*/

# include <iostream>

int main() {

	const int n = 10;
	/*
	std::cout << "Enter the number of elements in the array. Please enter a positive integer: ";
	std::cin >> n;
	while (n < 1) {
		std::cout << "The number of array elements can not be zero or negative. Please enter a positive integer: ";
		std::cin >> n;
	}
	*/
	double arr[n], sum = 0, avg;

	std::cout << "This C++ program finds the average of an array with " << n << " elements. \n";
	std::cout << "Enter the " << n << " elements of the array. Elements can be any real numbers. \n";

	for (int i = 0; i < n; i++) {
		std::cout << "Enter the array element at index " << i << ": ";
		std::cin >> arr[i];
		sum = sum + arr[i];
	}

	avg = sum / n;

	std::cout << "Thank you. \n The average of all elements in the array is " << avg << ". \n";

	return 0;

}
