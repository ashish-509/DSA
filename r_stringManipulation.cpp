#include <iostream>
#include <string>
using namespace std;

void removeLetter(string &str, char target, int index = 0) {
    if (index >= str.length()) return; 
   
    if (str[index] == target) str.erase(index, 1);
    
    removeLetter(str, target, index + 1);
}

int main() {
    string inputString;
    char targetLetter;

    cout << "\nEnter the string to be manipulated : ";
    getline(cin, inputString);

    cout << "\nEnter the letter to be removed : ";
    cin >> targetLetter;

    removeLetter(inputString, targetLetter);
    cout << "\nString after removing '" << targetLetter << "' is : " << inputString << endl << endl ;

    return 0;
}
