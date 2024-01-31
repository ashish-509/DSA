//An Armstrong number (also known as a narcissistic number, pluperfect digital invariant, or pluperfect number) is a number that is the sum of its own digits each raised to the power of the number of digits. 


#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int countDigits(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + countDigits(number / 10);
}

bool isArmstrong(int number, int originalNumber, int n) {
    if (number == 0) {
        return originalNumber == 0;
    }

    int digit = number % 10;
    return power(digit, n) == isArmstrong(number / 10, originalNumber - digit, n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int numDigits = countDigits(num);

    if (isArmstrong(num, num, numDigits)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
