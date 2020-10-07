#include <iostream>
using namespace std;

int array_input(int[]);
void array_print_forward(int[], int);
void array_print_backward(int[], int);
int array_equal(int[], int[], int);
int array_frequency(int[], int, int);
void selection_sort(int[], int);
void bubble_sort(int[], int);
int array_min(int[], int);
int array_max(int[], int);
void array_swap(int [], int [], int);

int main(){
	int x[10], n_x; 	//n_x will have the size of array
    int y[10], n_y;

    // X array
	n_x = array_input(x);       // array_input returns size of array
	cout << "X Array forward ";
    array_print_forward(x, n_x);
    cout << endl;
	cout << "X Array backward ";
    array_print_backward(x, n_x);
    cout << endl;

	//y array
	n_y = array_input(y);
	cout << "X Array forward ";
    array_print_forward(y, n_y);
    cout << endl;
	cout << "Y Array backward ";
    array_print_backward(y, n_y);
    cout << endl;

}

int array_input(int x[]){
	int n, i;
	cout << "Number of elements (<=10): ";
	cin >> n;
	for (i = 0; i < n; i ++){
		cout << "[" << i << "] = ";
		cin >> x[i];
	}
	return n;
}

// print array forward
void array_print_forward(int x[], int n){
    int i;
    for(i=0; i<n; i++){

      cout<<x[i]<<" ";
    }
    cout <<endl;
}
//print array backward
void array_print_backward(int x[], int n){
    int i;
    for(i = n-1 ; i >= 0; i --){

      cout<<x[i]<< " ";
    }
    cout << endl;
}
//Swapping array
void array_swap(int a[], int b[], int n){
    int i, temp;

    for(i = 0; i < n; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    array_print_forward(a, n);
}
