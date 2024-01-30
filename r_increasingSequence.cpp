#include <iostream>
using namespace std;

void printIncreasingSequence(int n, int current = 1) {
    if (current > n || current < 0) {
        return;
    }
    cout << current << " ";
    printIncreasingSequence(n, current + 1);
}

int main() {
    int inputNumber;
    cout << "\nEnter a number: ";
    cin >> inputNumber;

    cout << "\nNumbers in increasing sequence up to " << inputNumber << " are : ";
    printIncreasingSequence(inputNumber);
    cout << endl;

    return 0;
}
