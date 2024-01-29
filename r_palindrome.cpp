#include <iostream>
using namespace std;

int reverseNumber(int num, int rev = 0) {
    if (num == 0) {
        return rev;
    }

    int lastDigit = num % 10;

    rev = rev * 10 + lastDigit;

    return reverseNumber(num / 10, rev);
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int number;

    cout << "Enter a number : ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
