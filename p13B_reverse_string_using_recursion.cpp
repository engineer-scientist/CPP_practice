/* 
Q. 13. Write a program to reverse a string using recursion.
Example input and output: 
Enter a string: 
Quick brown fox.
The reversed string is: 
.xof nworb kciuQ
*/

# include <iostream>
# include <string>

using namespace std;

string reverse_str(string s, string r) {
	if (s.length() > 1) {
		r.append(s.substr(s.length() - 1, 1));
		s = s.substr(0, s.length() - 1);
		r = reverse_str(s, r); // Recursion (function calling itself). 
	}
	else
		r.append(s);
	return r;
}

int main() {

    string s, r = "";

    cout << "Enter a string: \n";
    getline(cin, s);

    r = reverse_str(s, r);

    cout << "Reversed string is: \n" << r << "\n";

    return 0;
}
