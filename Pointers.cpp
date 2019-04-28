#include <iostream>
using namespace std;

int main()
{

int x=5;
int *ptr = &x;

cout<<ptr<<endl; // this will give you the address of x
cout<<*ptr<<endl; // this will give you the value of x
return 0;

}
