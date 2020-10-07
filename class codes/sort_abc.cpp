/******************************************************************************
Sorting Three Integers: A, B, C

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: ";
    cin >> y;
    cout << "Enter third integer: ";
    cin >> z;

    if(x > y){
       if(x > z){
          if(y > z){
            cout << x <<" > "<< y << " > " << z;    // [x > y > z]
          }
          else{
            cout << x <<" > "<< z << " > " << y;        //[x > z > y]
          }
       }
       else{
          cout << z <<" > "<< x << " > " << y;      //[z > x > y]
       }
    }
    else{
        if(y > z){
            if(x > z){
                cout << y <<" > "<< x << " > " << z;        //[y > x > z]
            }
            else{
                cout << y <<" > "<< z << " > " << x;     //[y > z > x]
            }
        }
        else{
            cout << z <<" > "<< y << " > " << x;        //[z > y > x]
        }
    }

    return 0;
}
