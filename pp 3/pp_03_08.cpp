#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

   if((x > 10 && x < 40) && (x % 5 == 0) ){
        cout << "Yes";
   }
   else if ( (x > 60 && x < 90) && (x % 7 == 0) ){
        cout << "Yes";
   }
   else{
        cout << "No";
   }

    return 0;
}
