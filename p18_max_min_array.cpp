/*
Q. 18. Write a C++ program to find the maximum and minimum elemetns in an array.
For example:
arr[] = {10, 12, 45, 48, 22, 18}
Output:
Maximum = 48
Minimum = 10
*/

# include <iostream>

int main() {
	const int n = 10;
	/*
	std::cout << "Please enter the number of elements in the array. (Please enter only a positive integer.) \n";
	std::cin >> n;
	while (n < 1) {
		std::cout << "The entered integer is not positive. Please enter a positive integer. \n";
		std::cin >> n;
	}
	*/
	std::cout << "Enter the " << n << " elements of the array. Elements can be any real numbers. \n";

	double arr[n], max_arr, min_arr;

	for (int i = 0; i < n; i++) {
		std::cout << "Enter the array element at index " << i << ": ";
		std::cin >> arr[i];
	}

	max_arr = arr[0];
	min_arr = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] < min_arr)
			min_arr = arr[i];
		if (arr[i] > max_arr)
			max_arr = arr[i];
	}

	std::cout << "Maximum element of the array is " << max_arr << ". \n";
	std::cout << "Minimum element of the array is " << min_arr << ". \n";

	return 0;
}
