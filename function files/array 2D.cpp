    #include <iostream>
    #include <cstdlib>
    using namespace std;

    int array_input_rand (int[]);
    void input2D_rand(int [20][20], int, int);
    void print2D(int [20][20], int, int);
    int max2D(int [20][20], int, int);
    int frequency2D(int [20][20], int, int, int);
    void add_2D(int [20][20], int [20][20], int [20][20], int, int);
    void sub_2D(int [20][20], int [20][20], int [20][20], int, int);
    void transpose(int [20][20], int [20][20], int, int);
    void row_sum_2d(int [20][20], int[], int, int);
    void column_sum_2d(int [20][20], int[], int, int);
    void array_print_forward(int[], int);
    void array_print(int[], int);
    void array_initialize(int [], int);
    int isPrime(int);
    int prime_count_2D(int [20][20], int, int);
    void matrice_multiplication_2D(int [20][20], int [20][20], int [20][20], int, int, int, int);
    void array_initialize_2d(int [20][20], int, int);
    int diagonal_sum_2D(int [20][20], int, int);
    int count_prime(int[20][20],int,int);
     int secondary_diagonal_sum_2D(int [20][20], int, int);
     void twoD_to_oneD(int[20][20],int, int, int []);
void array_2d_input(int [20][20], int, int);
void array_2d_output(int [20][20], int , int );

    int main(){
        int x[20][20], y[20][20], z[20][20], m_1, n_1, m_2, n_2;

        cout << "Enter number of rows (<=20): ";
        cin >> m_1;
        cout << "Enter number of column (<=20): ";
        cin >> n_1;

        input2D_rand(x, m_1, n_1);
        cout << "_________________X________________" << endl;
        print2D(x, m_1, n_1);

        cout << "Enter number of rows (<=20): ";
        cin >> m_2;
        cout << "Enter number of column (<=20): ";
        cin >> n_2;

        input2D_rand(y, m_2, n_2);
        cout << "_________________Y________________" << endl;
        print2D(y, m_2, n_2);

        cout << secondary_diagonal_sum_2D(y,m_2,n_2);

        return 0;
}
    // input random values in a 2d array
    void input2D_rand(int a[20][20], int r, int c){
        int i, j, temp;

        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                temp = rand();      //cout << "[ " << i << "]" << "[ " << j << "]";
                a[i][j] = temp % 10;        //cin >> a[i][j];

            }
        }
    }

    //printing a 2d array
    void print2D(int a[20][20], int r, int c){
        int i, j;

        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                cout << a[i][j] << " " ;
            }
            cout << endl;
        }
        cout << endl;
    }

    //highest number within a 2d array
    int max2D(int a[20][20], int r, int c){
        int i, j, max;

        max = a[0][0];
        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                if(a[i][j] > max){
                    max = a[i][j];
                }
            }

        }

        return max;
    }

    //number of times a number is present in a 2d array
    int frequency2D(int a[20][20], int r, int c, int b){
        int i, j, freq;

        freq = 0;
        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                if(a[i][j] == b){
                    freq = freq + 1;
                }
            }

        }

        return freq;
    }

//sum of all the numbers of an 2d array
int sum2D(int s[20][20], int r, int c){
    int i, j, sum;

    sum = 0;
    for(i = 0; i < r; i = i + 1){     //row
        for(j = 0; j < c ; j = j +1){        //column
                sum = sum + 1;
        }

    }

    return sum;
}

    //add two 2d array (matrices)
    void add_2D(int add[20][20], int a[20][20], int b[20][20], int r, int c){
        int i, j;

        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                add[i][j] = a[i][j]+ b[i][j];
            }
        }

    }
   //sub two 2d array (matrices)
    void sub_2D(int add[20][20], int a[20][20], int b[20][20], int r, int c){
        int i, j;

        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j +1){        //column
                add[i][j] = a[i][j] - b[i][j];
            }
        }

    }


    //sum of rows of an 2d array
    void row_sum_2d(int a[20][20], int sum[], int r, int c)
    {
        int i, j;
        array_initialize(sum, r);       //initialize before using 1d array for sum

        for(i = 0; i < c; i++){     // This loop controls column
            for (j = 0; j < r; j++){        //row
                sum[i] = a[j][i] + sum[i];  //sum[i] because the numbers are adding in the same element of 1d array
            }
        }
        cout << "Sum of rows: ";
        array_print(sum, r);
    }

    //sum of column of an 2d array
    void column_sum_2d(int a[20][20], int sum[], int r, int c)
    {
        int i, j;
        array_initialize(sum, c);       //initialize before using 1d array for sum

        for(i = 0; i < r; i++){     // This loop controls row
            for (j = 0; j < c; j++){        //column
                sum[ i ] = a[ i ] [ j ] + sum[ i ];  //sum[i] because the numbers are adding in the same element of 1d array
            }
        }
        cout << "Sum of column: ";
        array_print(sum, c);
    }

    //transpose of 2d array
    void transpose(int a[20][20], int b [20][20], int r, int c){
        int i, j, temp;

        for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j + 1){        //column
                b [ j ][ i ] = a[ i ][ j ];
            }

        }
    }

    // print array forward
    void array_print(int x[], int n){
        int i;
        for(i=0; i<n; i++){

            cout<<x[i]<<" ";
        }
        cout <<endl;
    }

    // Function to initialize an array
    void array_initialize(int a[], int array_size)
    {
        int i;

        for(i = 0; i < array_size; i = i + 1){
            a[i] = 0;
        }
    }
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

//function to count prime numbers within an 2D array
int prime_count_2D(int a[20][20], int r, int c)
{
    int i, j, p_count, p_id;

    p_count = 0;
    for(i = 0; i < r; i = i + 1){     //row
            for(j = 0; j < c ; j = j + 1){        //column

                if(isPrime(a [i][j]) == 1){
                    p_count = p_count + 1;
                }
            }
        }
        return p_count;
}

//function to multiply two matrices
void matrice_multiplication_2D(int a[20][20], int b[20][20], int c[20][20], int r1, int c1, int r2, int c2)
{
    int i, j, k;

    //column of first must be equal to the row of second to multiply
    array_initialize_2d(c, r1, c2);

    for(k = 0; k < r1; k = k + 1){
        for(i = 0; i < c2; i = i + 1){
            for(j = 0; j < r2; j = j + 1){
                c[k][i] = ( a[k][j] * b[j][i] ) + c[k][i];
            }
        }
    }

}
// Function to initialize 2D array elements to 0
void array_initialize_2d(int a[20][20], int r, int c)
{
    int i,j;

    for(i = 0; i < r; i ++){
        for(j = 0; j < r; j ++){
            a[i][j] = 0;
        }
    }
}

//sum of diagonal values
int diagonal_sum_2D(int a[20][20], int r, int c)
{
    int i,j, sum;

    sum = 0;
    for(i = 0; i < r; i++){
        sum = a[i][i] + sum;
    }

    return sum;
}

//function to calculate reverse diagonal sum
int secondary_diagonal_sum_2D(int a[20][20], int r, int c)
{
    int i, j, sum;

    sum = 0;
    i = 0;
    for(j = c-1; j >= 0; j = j - 1){
        sum = a[i][j] + sum;
        i = i + 1;
        }
    return sum;
}

void twoD_to_oneD(int a[20][20],int r, int c,int b[])
{
    int i, j;

    int k = 0;
    for(i = 0; i < r; i = i + 1){     //row
        for(j = 0; j < c ; j = j + 1){     //column
            b[k] = a[i][j];
            k = k + 1;
        }
    }
}
void array_2d_input(int a[20][20], int r, int c)
{
  int i, j;

  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cout << "[" << i << "]" << "[" << j << "] = ";
      cin >> a[i][j];
    }
  }
}
void array_2d_output(int a[20][20], int r, int c)
{
  int i, j;

  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      cout << "[" << i << "]" << "[" << j << "] = ";
      cout << a[i][j] << endl;
    }
  }
}
