#include <iostream>
using namespace std;

int main()
{

    int x=5;
    int *ptr = &x;

    cout<<ptr<<endl; // this will give you the address of x
    cout<<*ptr<<endl; // this will give you the value of x

    //Use if & and how its different from *
    
    // int *ptr = &x;
    //
    // The above statement means that there's a pointer named ptr which stores the
    // address of the variable x. so *ptr points to the the value of( thats * for you)
    // the address stored inside of ptr viz. the address of x (thats the application of &)

    
    
return 0;

}
