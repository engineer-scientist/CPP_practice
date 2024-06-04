/*
Q. 22. Write a C++ program to rotate the elements of a matrix clockwise K times.
We can rotate the matrix elements in two ways: clockwise and anti-clockwise.
In this problem, you have to rotate the elements of the matrix in the clockwise direction
for K number of times.

Example 1:
Input matrix =
1   2   3
4   5   6
7   8   9
K = 2
Output matrix =
7   4   1
8   5   2
9   6   3

Example 2:
Input matrix =
1    2    3    4
5    6    7    8
9    10   11   12
13   14   15   16
K = 1
Output matrix =
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12
*/

# include <iostream>

const int n = 4;

/*
For a square matrix, where i is row index and j is column index:
i < j: top and right triangles.
i > j: bottom and left triangles.
i + j < n - 1: top and left triangles.
i + j > n - 1: bottom and right triangles.
*/

bool left_triangle(int i, int j) {
	if ((i > j) && (i + j < n - 1))
		return true;
	else
		return false;
}

bool top_triangle(int i, int j) {
	if ((i < j) && (i + j < n - 1))
		return true;
	else
		return false;
}

bool right_triangle(int i, int j) {
	if ((i < j) && (i + j > n - 1))
		return true;
	else
		return false;
}

bool bottom_triangle(int i, int j) {
	if ((i > j) && (i + j > n - 1))
		return true;
	else
		return false;
}

bool lower_left_diagonal(int i, int j) {
	if ((i + j == n - 1) && (j < float(n - 1) / 2))
		return true;
	else
		return false;
}

bool upper_left_diagonal(int i, int j) {
	if ((i == j) && (j < float(n - 1) / 2))
		return true;
	else
		return false;
}

bool upper_right_diagonal(int i, int j) {
	if ((i + j == n - 1) && (j > float(n - 1) / 2))
		return true;
	else
		return false;
}

bool lower_right_diagonal(int i, int j) {
	if ((i == j) && (j > float(n - 1) / 2))
		return true;
	else
		return false;
}

int main() {
	double matrix1[n][n], matrix2[n][n];
	int K;

	std::cout << "This C++ program takes a square matrix (of " << n << " rows and " << n << " columns) and K (non-negative integer) as inputs, rotates the matrix elements clockwise K times, and displays the matrix with rotated elements. \n\n";
	std::cout << "Please enter the elements of the square matrix (can be any real numbers). \n";

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			std::cout << "Enter the matrix element at row " << i << " and column " << j << ": ";
			std::cin >> matrix1[i][j];
		}

	std::cout << "Thank you. \n Please enter K (number of times to rotate the matrix elements clockwise). Please enter only a non-negative integer. \n";
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

	std::cout << "After rotating the matrix elements clockwise " << K << " times, the matrix is displayed below: \n";

	/*
	The diagonal elementss of a square matrix can be identified as follows:
		Diagonal 1 (from top left to bottom right): row index == column index.
		Diagonal 2 (from top right to bottom left): row index + column index == n - 1.
	The diagonals divide the matrix in to 4 triangles: left, top, right, and bottom.
	loop K times:
		loop over all rows:
			loop over all columns:
				if matrix element is in left triangle or lower-left diagonal, then move it up.
				if matrix element is in top triangle or upper-left diagonal, then move it right.
				if matrix element is in right triangle or upper-right diagonal, then move it down.
				if matrix element is in bottom triangle or lower-right diagonal, then move it left.
	*/

	while (K > 0)
	{
		// Updating elements of matrix2:
		for (int i = 0; i < n; i++) // Looping over the rows.
			for (int j = 0; j < n; j++) // Looping over the columns.
			{
				if (left_triangle(i, j) || lower_left_diagonal(i, j))
					matrix2[i - 1][j] = matrix1[i][j]; // Move matrix element up.
				else if (top_triangle(i, j) || upper_left_diagonal(i, j))
					matrix2[i][j + 1] = matrix1[i][j]; // Move matrix element right.
				else if (right_triangle(i, j) || upper_right_diagonal(i, j))
					matrix2[i + 1][j] = matrix1[i][j]; // Move matrix element down.
				else if (bottom_triangle(i, j) || lower_right_diagonal(i, j))
					matrix2[i][j - 1] = matrix1[i][j]; // Move matrix element left.
				else
					matrix2[i][j] = matrix1[i][j];
			}

		// Copying elements from matrix2 to matrix1:
		for (int i = 0; i < n; i++) // Looping over the rows.
			for (int j = 0; j < n; j++) // Looping over the columns.
				matrix1[i][j] = matrix2[i][j];

		K = K - 1;
	}

	// Displaying the new matrix:
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			std::cout << "\t" << matrix1[i][j];
		std::cout << "\n";
	}

	return 0;
}
