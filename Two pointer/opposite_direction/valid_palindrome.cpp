#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool ispalendrom(string s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        if (!isalnum(s[left])) {
            left++;
        }
        else if (!isalnum(s[right])) {
            right--;
        }
        else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }
    }

    return true;
}

int main() {

    string s = "MADAM";

    if (ispalendrom(s)) {
        cout << "The string is palindrome" << endl;
    }
    else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}