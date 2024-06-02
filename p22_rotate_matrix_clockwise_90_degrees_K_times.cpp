/*
Q. 22. Create a C++ program to
rotate the elements of a matrix by 90 degrees, clockwise, K times.

Example 1:
Input matrix =
1   2   3
4   5   6
7   8   9
K = 1
Output matrix =
7   4   1
8   5   2
9   6   3

Example 2:
Input matrix =
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16
K = 1
Output matrix =
13	9	5	1
14	10	6	2
15	11	7	3
16	12	8	4
*/

# include <iostream>

int main() {
	const int n = 4;
	double matrix1[n][n], matrix2[n][n];
	int K;

	std::cout << "This C++ program takes a square matrix (of " << n << " rows and " << n << " columns) and K (non-negative integer) as inputs, rotates the square matrix clockwise by 90 degrees K times, and displays the rotated matrix. \n";
	std::cout << "Please enter the elements of the square mentrix (can be any real numbers). \n";

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			std::cout << "Enter the matrix element at row " << i << " and column " << j << ": ";
			std::cin >> matrix1[i][j];
		}

	std::cout << "Thank you. \n Please enter K (number of times to rotate the square matrix clockwise by 90 degrees). Please enter only a non-negative integer. \n";
	std::cin >> K;
	while (K < 0) {
		std::cout << "K can not be negative. Please enter a non-negative integer: ";
		std::cin >> K;
	}

	std::cout << "Thank you. \n The matrix entered is displayed below: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << "\t" << matrix1[i][j];
		std::cout << "\n";
	}

	std::cout << "After rotating clockwise by 90 degrees " << K << " times, the rotated matrix is displayed below: \n";

	K = K % 4; // 4 rotations of 90 degrees each = 1 rotation of 360 degrees = same matrix as before.

	// Loop K times:
		// Rotate matrix1 by 90 degrees clockwise and store the result in matrix2.
			// Transpose the matrix and then take its reflection (either horizontally or vertically).
		// Copy all elements from matrix2 to matrix1.

	for (int r = 0; r < K; r++) {
		// Transpose matrix1 and store the result in matrix2:
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				matrix2[i][j] = matrix1[j][i];
		// Reflect matrix2 horizontally and store the result in matrix1:
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				matrix1[i][j] = matrix2[i][n - 1 - j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << "\t" << matrix1[i][j];
		std::cout << "\n";
	}

	return 0;
}
