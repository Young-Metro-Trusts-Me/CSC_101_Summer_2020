#include <iostream>

using namespace std;

//prototyping functions
int factorial(int);
float power(float, int);
int hcf(int, int);
int lcm(int, int );
int prime_number_identifier(int);
int perfect_number_identifier(int);
int armstrong_number_identifier(int);
int square_of_odd(int);
void fibonacci_print(int);
int fibonacci_determiner(int);
void divisors(int);
float exponential(float);
float cosx(float);


//main function
int main()
{
    int x,i;
    float y;

    cout << "Enter a number: ";
    cin >> x;

    y = cosx(x);
    cout << "Cos" << x << " = " << y;
    return 0;
}

//defining functions
//factorial function
int factorial(int num){
    int y, i;

    y = 1;
    for (i = 1; i <= num; i = i + 1){
        y = y * i;
    }

    return y;
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
//HCF function
int hcf(int num_1, int num_2){
    int temp, result;

    if (num_1 > num_2){
          temp = num_1;
          num_1 = num_2;
          num_2 = temp;
      }

      for (result = num_2; result > 0; result = result - 1){
          if ((num_1 % result == 0) && (num_2 % result == 0)){
              break;
           }
    }
    return result;
}
//LCM Function
int lcm(int x, int y){
    int i, temp;

    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }

    for (i = y; i <= x * y; i = i + 1){
        if ((i % x == 0) && (i % y == 0)){
            break;
        }
    }
    return i;
}
//Prime number identifier function
int prime_number_identifier(int num)
{
    int y, i;

    y = 1;
    for (i = 2; i < num ; i = i + 1){
        if (num % i == 0){
            y = 0;      // If the number is divisible(Not a prime) y becomes y = 5
            break;      // Loop breaks after the number is divisible
        }
    }

   return y;
}
//perfect number identifier
int perfect_number_identifier(int num)
{
    int i, sum, result;

    sum = 0;
    for (i = 1; i < num ; i = i + 1){
        if (num % i == 0){
            sum = sum + i;
        }
    }

    result = 0;
    if (sum == num){
        result = 1;
    }

    return result;
}
//armstrong number identfier
int armstrong_number_identifier(int num)
{
    int y, sum, r, result;

    y = num;
    sum = 0;
    while (y >= 10){
        r = y % 10;
        y = y / 10;
        sum = sum + (r * r * r);
    }

    sum = sum + (y * y * y);

    result = 0;
    if (sum == num){      // need to compare the number with x
        result = 1;
    }

    return result;
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
//Printing fibonacci till N
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
int fibonacci_determiner(int num)
{
    int i, f_1 = 0, f_2 = 1, sum, result;

    sum = 0;
    result = 0;
    i = 2;  //Because we are excluding 0,1 or first 2 elements of the sequence
    while(sum <= num){

        i = i + 1;
        sum = f_1 + f_2;

        if (sum == num){
            result = 1;
            break;
        }

        f_1 = f_2;
        f_2 = sum;
    }

    return result;
}
//divisors function
void divisors(int num)
{
    int i;
    for(i = 1; i < num; i = i + 1){
        if(num % i == 0){
            cout << i << ",";
        }
    }

    cout << num;      //Will print last divisor which is itself
}
//function for cosx
//1 - (x^2)/(2!) + (x^4)/(4!) - (x^6) / (6!)
float cosx(float angle)
{
    int i, sign;
    float result, p,f;

    result = 1;
    sign = -1;
    for(i = 2; i <= 10; i = i + 2){
        p = power(angle, i);
        f = factorial(i);

        result = result + sign * (p / f);
        sign = sign * (-1);
    }

    return result;
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
