#include <iostream>
using namespace std;

int main()
{

    int x=5;
    int *ptr = &x;

    // Before we dive into pointers, let us clear what each symbol means and what it does
    //
    // The '&' operator is also known as Address-of operator. This is used whenever we need
    // to retrieve the adress of any variable or object(which we'll see later).
    //
    // The '*' operator is akso known as the dereference operator. In other words its used to store
    // the address of another variable, in layman terms "to point to a variable". Hence the name
    // POINTERS.
    //
    // Pointers are said to "point to" the variable whose address they store.
    
    cout<<ptr<<endl; // This will give you the address of x as originally the variable stores the address
                     // of the variable it is pointing to.
    
    cout<<*ptr<<endl; // A classic explanation of working of * operator. This will give you the value of x.

    //Use if & and how its different from *
    
    // int *ptr = &x;
    //
    // The above statement means that there's a pointer named ptr which stores the
    // address of the variable x. so *ptr points to the the value of( thats * for you)
    // the address stored inside of ptr viz. the address of x (thats the application of &).

    //Now we'll see how we can use pointers to represent array:
    
    int myArray[5]; // This initialises a array with the given elements.
    int *pointerToArray;         // This initializes a pointer variable
    
    
    // Now the thing about pointers is that it points to the variable whose address is stored in the variable.
    // So if we write the followong code:
    
    pointerToArray=myArray;
    //This will make the variable "pointerToArray" point to the first element of "myArray".
    
    // So if we increment the pointer by 1, instead of adding 1 to the address it will move to
    // the next address location ccording to the size of the data type.
    
    cout<<endl<<"Entering the values in the array"<<endl;
    for ( int i = 0; i < 5; i++ ) {
        *(pointerToArray + i)=i;
    }
    
    for(int i=0;i<5;i++)
        cout << "*(pointerToArray + " << i << ") : "<< *(pointerToArray + i) << endl;
    //Here we can see how the array is being accessed by the pointer.

    
    
    return 0;

}
