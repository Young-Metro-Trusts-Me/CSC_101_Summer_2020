#include <iostream>
using namespace std;

void prime_number_identifier(int *, int *);
int isEven(int);


int main()
{
    int *x, *even, *prime;

    x = new int;
    even = new int;
    prime = new int;

    cout << "Enter an integer: ";
    cin >> *x;

    prime_number_identifier(x, prime);
    *even = isEven(*x);

    if((*even == 0) && (*prime==1)){
        cout << *x << " is an odd number " <<endl;
        cout << *x << " is also a prime number " <<endl;
    }
    else if((*even == 1) && (*prime==1)){
        cout << *x << " is not an odd number " <<endl;
        cout << *x << " is a prime number " <<endl;
    }
    else if((*even == 0) && (*prime==0)){
        cout << *x << " is an odd number " <<endl;
        cout << *x << " is not a prime number " <<endl;
    }
    else{
        cout << *x << " is neither odd nor prime" << endl;
    }

    return 0;
}
//Prime number identifier function
void prime_number_identifier(int *num, int *res)
{
    int *i;

    i = new int;

    *res = 1;
    for (*i = 2; *i < *num ; *i = *i + 1){
        if (*num % *i == 0){
            *res = 0;
            break;
        }
    }
}
int isEven(int a)
{
    int i;

    i = 0;
    if(a % 2 == 0){
        i = 1;
    }
    return i;
}
