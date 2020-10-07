#include <iostream>
using namespace std;

//prototyping functions
int factorial(int);
void prime_num_generate(int, int);
int isPrime(int);
int square_of_odd(int);
float power(float, int);
void fibonacci_print(int);
void perfect_number_identifier(int);
int sum_of_digits(int);
float exponential(float);
void Cosx(float angle);


//main function
int main()
{
    int x;
    float res;

	cout << "Enter number: ";
	cin >> x;

	perfect_number_identifier(x);
    return 0;
}

//factorial function
int factorial(int num){
    int y, i;

    y = 1;
    for (i = 1; i <= num; i = i + 1){
        y = y * i;
    }

    return y;
}
//square of first n number of odd numbers
int square_of_odd(int num){
	int sqr, sum, i;

    sum = 0;
    for(i = 1; i < num * 2; i = i + 2){
        sqr = i * i;
        sum = sum + sqr;
    }
	return sum;
}
//Prime number generator function
//Requires isPrime function
void prime_num_generate(int x, int y){
    int i, j, p;

    //Generate number
    for(i = x; i <= y; i = i + 1){

        p = isPrime(i);

        //Print if the number is prime
        if(p == 1){
            cout << i << " ";
        }
    }
}
//Check if a number is prime or not
int isPrime(int num){
    int i, j;

    j = 1;
    for(i = 2; i < num; i++){

        if(num % i == 0){
        j = 0;
        break;
        }
    }

    if (num == 1){
        j = 0;
    }

    return j;
}
//Power Function
float power(float num, int pow_num){
    int i;
    float result;

    result = 1;
     for (i = 1; i <= pow_num; i = i + 1){
        result = result * num;
    }

    return result;
}
//Printing fibonacci till N
//0+1+1+2+3+5+8+13+....
void fibonacci_print(int num){
	int f_1 = 0, f_2 = 1, sum, i;   //f_1 = 0 and f_2 = 1 because of first two values of fibonacci

	cout << f_1 << "," << f_2 << ",";

    for (i = 3; i < num ; i = i + 1){

        sum = f_1 + f_2;

        cout << sum << ",";
        //overwrite the values of f_1 and f_2 for next calculation
        f_1 = f_2;
        f_2 = sum;

    }

    sum = f_1 + f_2;

    cout << sum;
}
//perfect number identifier
void perfect_number_identifier(int num)
{
    int i, sum;

    sum = 0;
    for (i = 1; i < num ; i = i + 1){
        if (num % i == 0){
            sum = sum + i;
        }
    }

    if (sum == num){
        cout << "Perfect number";
    }
    else {
        cout << "Not a perfect number";
    }
}
//function for sum_of_digits
int sum_of_digits(int num){
    int r, i, sum;

    sum = 0;
    //breaking number into digits
    while(num >= 1){

        r = num % 10;
        num = num / 10;

        sum = sum + r;      //sum of the digits
    }
    cout << "Sum of the digits is: "  <<  sum;      //x has the last digit of the number

    return sum;
}
//function for exponential
float exponential(float num){
    int i;
    float result;

    result = 1;
    for(i = 1; i <= 10; i = i + 1){
        result = result + power(num, i) / factorial(i);
    }

    return result;
}
