/*
Q10. Write a Program to Check Whether a Number Is Prime or Not.
Example input and output: 
Enter a positive integer: 29
29 is a prime number.
*/

# include <iostream>

int main() {
	int n;
	
	std :: cout << "Enter a positive integer: ";
	std :: cin >> n;
	while (n <= 0) {
		std :: cout << n << " is not a positive integer. Please enter a positive integer: ";
		std :: cin >> n;
	}
	
	if (n == 1) 
		std :: cout << n << " is neither prime nor composite. \n";
	else {
		bool is_prime = true;
		
		for (int i = 2; i < n; i ++)
			if (n % i == 0)
				is_prime = false;
				
		if (is_prime)
			std :: cout << n << " is a prime number. \n";
		else
			std :: cout << n << " is a composite number. \n";
	}
	return 0;
}
