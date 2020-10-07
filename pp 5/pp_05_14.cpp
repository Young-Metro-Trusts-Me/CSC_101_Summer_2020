#include <iostream>

using namespace std;

int main()
{
    int x, i;

    cout << "Enter a number: ";
    cin >> x;

    for(i = 1; i < x; i = i + 1){
        if(x % i == 0){
            cout << i << ",";
        }
    }

    cout << x;      //Will print last divisor which is itself

    return 0;
}
