#include <iostream>

using namespace std;

int main()
{
// 1. declaration of pointer variable
    int *x, *y, *temp;
// 2. allocate memory location to point to
    x = new int;
    y = new int;
    temp = new int;
// taking input using pointer variables
   cout <<"Enter First int: ";
   cin >> *x;
   cout <<"Enter Second int: ";
   cin >> *y;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;

//swap using value
  *temp = *x;
  *x = *y;
  *y = *temp;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;


//swap using pointer or address
  temp = x;
     x = y;
     y = temp;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;

    return 0;
}