#include<iostream>
using namespace std;

int main()
{
    int value = 0 , n;
    cout << "\nEnter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i *= 2){
        for (int j = 1; j <= i; j++){
            cout<<value<<" \n";
            value++;
        }
        cout << "value : " << endl;
    }
    cout << "The final value is : " << value << endl;


    return 0;
}