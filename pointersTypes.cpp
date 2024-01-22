#include <iostream>
using namespace std;

int main()
{
    cout<<endl<<endl;
    //..........Types of Pointers.............

    // 1. Wild Pointers : It is a type of pointer where user has declared but not  initialised the pointer. Due to this it points to some random memory location and may cause a program to crash or misbehave or segmentation fault.





    // 2. Null Pointers : when we have declred a pointer but will get the address to store later we can use null pointer. It is a pointer which points to nothing. It is a good practice to initialise a pointer to null if we don't have exact address to be assigned.

    int *ptr = NULL; // ptr is a null pointer

    cout << "The value of ptr is " << ptr; //The value of ptr is 0
    cout << "\nThe address of ptr is " << &ptr; //The address of ptr is 0x7fffbf7c8a68
    // cout << "\nThe value at address ptr is " << *ptr; //Segmentation fault (core dumped)



     

    // 3. Dangling Pointers : It is a type of pointer that points to a memory loction that is not valid now. It may be the case that the memory location earlier pointed by the pointer is deallocated or freed, trying to access the pointer out of it's scope. 




 
    // 4. Void Pointers : special pointers that can point to any data type value. It is also called general purpose pointer.  
    // void pointers can not be dereferenced directly. It must be type casted to some other pointer type before dereferencing it.

    float f = 10.5;
    int i = 10;
    void *vptr = &f; // void pointer pointing to float variable
    cout << "The value of f is " << *(float *)vptr << endl; //The value of f is 10.5
    
    vptr = &i; // void pointer pointing to int variable
    cout << "The value of i is " << *(int *)vptr << endl; //The value of i is 10



    cout << endl
         << endl;
    return 0;
}
