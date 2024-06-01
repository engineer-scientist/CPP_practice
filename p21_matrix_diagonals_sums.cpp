/*
Q. 21. Write a C++ program to compute the sum of diagonals of a matrix.
In this problem, you have to calculate the sum of elements in both the diagonals of a matrix.
Matrices are generally represented as 2-dimensional arrays.
For example:
matrix =
2   2   3
4   5   6
7   8   9
Output:
Sum of elements in the principal diagonal = 16
Sum of elements in the secondary diagonal = 15
*/

# include <iostream>

int main() {

	const int n = 3;
	double matrix[n][n];

	std::cout << "This C++ program takes a square matrix (with " << n << " rows and " << n << " columns) as input, and then displays the sums of elements in its diagonals. \n";
	std::cout << "Please enter the elements of the square matrix (can be any real numbers). \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			std::cout << "Enter matrix element in row " << i << " and column " << j << ": ";
			std::cin >> matrix[i][j];
		}

	double sum_TLBR = 0.0, sum_TRBL = 0.0;

	std::cout << "Thank you. \n The entered matrix is displayed below: \n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << "\t" << matrix[i][j];
			if (i == j)
				sum_TLBR = sum_TLBR + matrix[i][j];
			if (i + j == n - 1)
				sum_TRBL = sum_TRBL + matrix[i][j];
		}
		std::cout << "\n";
	}

	std::cout << "Sum of all elements in the diagonal from top left to bottom right is " << sum_TLBR << ". \n";
	std::cout << "Sum of all elements in the diagonal from top right to bottom left is " << sum_TRBL << ". \n";

	return 0;

}
