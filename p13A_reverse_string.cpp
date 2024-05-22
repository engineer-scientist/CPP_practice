// C++ program to take a string as input, reverse it, and display the reversed string.

# include <iostream>
# include <string>
using namespace std;

int main() {

    string s, r = "";

    cout << "Enter a string: \n";
    getline(cin, s);

    cout << "The entered string is: \n" << s << "\n";
    // int l = s.length();
    // cout << "This string without the last character is: \n" << s.substr(0, s.length() - 1);

    for (int i = s.length(); i >= 0; i--) {
        r.append(s.substr(i, 1));
        // s = s.substr(0, s.length() - 1);
    }

    cout << "Reversed string is: \n" << r << "\n";

    return 0;
}
