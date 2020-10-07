#include <iostream>
#include <cstdlib>
using namespace std;

void array_num_generate_range(int [], int);
int array_input(int[]);
void array_print(int[], int);
void array_print_backward(int[], int);
float array_average(int [], int);
int array_input_rand_range(int[]);
int array_input_rand(int[]);
int array_max(int[], int);
int array_min(int [], int);
int array_frequency(int [], int, int);
int array_search_number(int [], int, int);
void array_swap(int[], int[], int);
int array_equal(int[], int[], int);
void selection_sort(int[], int);
void bubble_sort(int[], int);
void array_reverse(int[], int [], int);
void array_initialize(int [], int);
void binary_convert(int [], int);
void array_set_print(int[], int);
int array_copy(int[], int[], int, int);
int isEqual(int[], int[], int);
int isSubset(int[], int, int [], int);
int tracker_verifier(int [], int);

int main(){
	int x[20], y[20], n_x, d_num;  //n_x will have the size of array

   cout << "enter a number to convert in binary: ";
   cin >> d_num;

   binary_convert(x, d_num);

   array_print(x, 8);

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

//print array backward
void array_print_backward(int x[], int n){
    int i;
    for(i = n-1 ; i >= 0; i --){        //n-1 cause array index ends at n-1

        cout<<x[i]<< " ";
    }
    cout << endl;
}

//average array function
float array_average(int a[], int array_size)
{
    int i, sum;
    float average;

    sum = 0;
    for(int i = 0; i < array_size; i++){
        sum = sum + a[i];
    }

    average = sum / array_size;

    return average;

}

// random array input within a range
int array_input_rand_range(int a[])
{
    int max_num, min_num;
    int n, i, temp;
	cout << "Number of elements: ";
	cin >> n;

	cout << "Enter minimum number in range: ";
	cin >> min_num;
	cout << "Enter maximum number in range: ";
	cin >> max_num;

	for (i = 0; i < n; i ++){
		temp = max_num - rand() %(max_num - min_num);       //check
		a[i] = temp;
	}

	return n;

}

//array input rand without range
int array_input_rand(int a[])
{
    int n, i, temp;
	cout << "Number of elements: ";
	cin >> n;

	for (i = 0; i < n; i ++){
		temp = rand() % 50;
		a[i] = temp;
	}

	return n;
}

//search a number in an array
int array_search_number(int a[], int array_size, int num)
{
    int i,result;

    result = 0;
    for(i = 0; i < array_size; i++){

        if (a[i] == num){
            result = 1;
        }
    }
    return result;
}

//array swap
void array_swap(int a[], int b[], int array_size)
{
    int i, temp;

    for(i = 0; i < array_size; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

//check if two arrays are equal or not
int array_equal(int a[], int b[], int array_size)
{
    int i, isEqual;

    isEqual = 1;
    for(i = 0; i < array_size; i++){

        if(a[i] != b[i]){
            isEqual = 0;
            break;
        }
    }
    return isEqual;     //will return 0 or 1
}

//selection sort function
void selection_sort(int a[], int array_size)
{
    int i, j, temp, min_index;

    //this loop will change the element incrementally
    for(j = 0; j < array_size - 1; j = j +1){       //array_size -1 cause the last element will be sorted
        min_index = j;
        //loop to check values in unsorted array
        for(i = j + 1; i < array_size; i = i + 1){
            if(a[i] < a[min_index]){
                min_index = i;
            }
        }
        //swap the value with the found element
        temp = a[j];
        a[j] = a[min_index];
        a[min_index] = temp;
    }
}

//frequency function
int array_frequency(int a[],int array_size, int num)
{
    int i, freq;

    freq = 0;
    for(i = 0; i < array_size; i++){
        if(a[i] == num){
            freq = freq + 1;
        }
    }

    return freq;
}

//bubble sort function
void bubble_sort(int a[], int array_size)
{
    int i, j,temp;
    //loop to sort every number
    for(j = 0; j < array_size - 1; j = j +1){
        //this loop pushes the largest bubble at the end
        for(i = 0; i < array_size -1 ;i = i +1){
            if (a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a [i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

//function for finding max value in an array
int array_max(int a[], int array_size)
{
    int i, max_num;

    max_num = a[0];
    for(i = 1; i < array_size; i++)
    {
        if(max_num < a[i]){
            max_num = a[i];
        }
    }

    return max_num;
}

//function for finding min value in an array
int array_min(int a[], int array_size)
{
    int i, min_num;

    min_num = a[0];
    for(i = 1; i < array_size; i++)
    {
        if(a[i] < min_num){
            min_num = a[i];
        }
    }

    return min_num;
}

//function for reversing an array
void array_reverse(int a[], int rev[], int array_size)
{
    int i, r;

    r = array_size - 1;
    for(i = 0; i < array_size; i = i + 1){
        rev[i] = a[r] ;
        r = r - 1;
    }
}

// Function to initialize an array
void array_initialize(int a[], int array_size)
{
    int i;

    for(i = 0; i < array_size; i = i + 1){
        a[i] = 0;
    }
}

// Function for converting decimal to binary
void binary_convert(int a[], int dec_num)
{
    int i, b[10],bin_num;
    array_initialize(a, 8);

    for (i = 0; i < 8; i = i + 1){
        bin_num = dec_num % 2;

        dec_num = dec_num / 2;

        b[i] = bin_num;
    }
    array_reverse(b,a,8);
}
//prints out an int array in a set
void array_set_print(int a[], int size)
{
    int i;

    cout << "{";
    for(i = 0; i < size - 1; i ++){
        cout << a[i] << "," ;
    }
    cout << a[i] << "}";

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

//verifies a tracker array whether it has all 1
int tracker_verifier(int track[], int size)
{
    int i, res;

    res = 1;
    for(i = 0; i < size; i++){
        if(track[i] != 1){
            res = 0;
            break;
        }
    }

    return res;
}
//checks if a set is a subset of another set. returns 1 or 0
int isSubset(int large_set[], int size_of_large_set, int subset[], int size_of_subset)
{
    int i, temp, track[20], result;
    //initialize tracker array same size as the subset
    array_initialize(track, size_of_subset);

    for(i = 0; i < size_of_subset; i++){

        //search first element of subset array in large set
        temp = array_search_number(large_set, size_of_large_set, subset[i]);

        //tracker array keeps track of each element whether its present or not
        track[i] = temp;
    }

    result = tracker_verifier(track, size_of_subset);

    return result;
}

//function to see if two int arrays are equal or not
int isEqual(int a[], int b[], int length)
{
    int i, eq;

    eq = 1;
    for(i = 0; i < length; i++){
        if(a[i] != b[i]){
            eq = 0;
            break;
        }
    }
    return eq;
}



