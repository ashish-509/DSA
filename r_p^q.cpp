// CPP program to find the number^n using recursion.

// #include<iostream>
// using namespace std;

// int poweringFunction(int base, int power){
//     if (power == 0)
//         return 1;
//     return (base * poweringFunction(base, power-1));
// }

// int main()
// {
//     int base, power;
//     cout<<"\nEnter the base number and powering number : ";
//     cin>>base>>power;

//     cout<<"The value of "<<base<<"^"<<power<<" is : "<<poweringFunction(base,power)<<endl;

//     return 0;
// }





// Optimised CPP program to find the number^n using recursion.

#include <iostream>
using namespace std;

int poweringFunction(int base, int power)
{
    if (power == 0)
        return 1;
    int result = poweringFunction(base, power / 2);
    return (power % 2 == 0) ? result * result
                            : base * result * result;
}

int main()
{
A:
    int base, power;
    cout << "\nEnter the base number and powering number : ";
    cin >> base >> power;

    cout << "The value of " << base << "^" << power << " is : " << poweringFunction(base, power) << endl;
    goto A;

    return 0;
}