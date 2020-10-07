#include <iostream>
#include <cstdlib>
using namespace std;

int array_input(int[]);
void array_print(int[], int);
int running_average(int [], int, int, float[]);
void array_initialize(int [], int);
int array_copy(int[], int[], int, int);
float average_array(int [], int);
void array_print_float(float [], int);

int main()
{
    int x[20], n_x, run_size, s_res;
    float result[20];

    n_x = array_input(x);

    cout << "Enter run size: ";
    cin >> run_size;

    s_res = running_average(x, n_x, run_size, result);

    array_print_float(result, s_res);

    return 0;
}

//takes input into a 1D array
int array_input(int x[]){
	int n, i;
	cout << "Number of elements: ";
	cin >> n;
	for (i = 0; i < n; i ++){
		cout << "[" << i << "] = ";
		cin >> x[i];
	}
	return n;
}

// print array forward
void array_print(int x[], int n){
    int i;
    for(i=0; i<n; i++){

        cout<<x[i]<<" ";
    }
    cout <<endl;
}

int running_average(int x[], int size_x, int run_size, float result[])
{
    int i, temp[20], k, s_temp;

    k = 0;
    for(i = 0; i < size_x; i  = (i+run_size) - 1){
        array_initialize(temp, run_size);

        s_temp = array_copy(temp, x, k, (k + run_size) - 1);

        result[k] = average_array(temp, s_temp);
         k = k +1;
    }
    return k;
}

// Function to initialize an array
void array_initialize(int a[], int array_size)
{
    int i;

    for(i = 0; i < array_size; i = i + 1){
        a[i] = 0;
    }
}
//copies int array from a specific position till a specific position
int array_copy(int cpy[], int copy_from[], int pos_of_copy, int copy_till)
{
    int i;

    for(i = pos_of_copy; i <= copy_till; i++){
        cpy[i - pos_of_copy] = copy_from[i];
    }

    return copy_till - pos_of_copy + 1;
}

float average_array(int a[], int total_num)
{
    int i;
    float res;

    res = 0;
    for(i = 0; i < total_num; i++){
        res = res + a[i];
    }
    res = (1.0 * res) / total_num;

    return res;
}
// print array forward
void array_print_float(float x[], int n){
    int i;
    for(i=0; i<n; i++){

        cout<<x[i]<<" ";
    }
    cout <<endl;
}



