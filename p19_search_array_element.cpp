/*
Q. 19. Write a C++ program to search an element in an array (linear search).
If the element is found, then display its index. The array is unsorted.
For example:
arr[] = {10, 11, 7, 8, 2, 9};
Element to be searched: 19
Output: 19 not found in the arr[]
*/

# include <iostream>

int main() {

	const int n = 10;
	double arr[n], e;
	int e_index;
	bool found = false;

	std::cout << "The array has " << n << " elements. They can be any real numbers. \n";
	for (int i = 0; i < n; i++) {
		std::cout << "Enter array element at index " << i << ": ";
		std::cin >> arr[i];
	}
	std::cout << "Thank you. \n Enter the element to be searched in this array: ";
	std::cin >> e;

	for (int i = 0; i < n; i++)
		if (arr[i] == e) {
			found = true;
			e_index = i;
			break;
		}

	if (found)
		std::cout << "The first occurence of element " << e << " is at index " << e_index << " in the array. \n";
	else
		std::cout << "Element " << e << " is not found in the array. \n";

	return 0;
}
