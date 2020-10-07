//fix for x = 1,2

#include <iostream>

using namespace std;

void fibonacci_print(int num);

int main()
{
    int x, i, f_1 = 0, f_2 = 1, sum;

    cout << "Enter number of fibonacci to print: ";
    cin >> x;

	fibonacci_print(x);
    return 0;
}

void fibonacci_print(int num){
	int f_1 = 0, f_2 = 1, sum, i;

	cout << f_1 << "," << f_2 << ",";

    for (i = 3; i < num ; i = i + 1){

        sum = f_1 + f_2;

        cout << sum << ",";

        f_1 = f_2;
        f_2 = sum;

    }

    sum = f_1 + f_2;

    cout << sum;

}
