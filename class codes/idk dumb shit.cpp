#include <iostream>
using namespace std;

void array_2d_input(int [20][20], int, int);
void array_2d_output(int [20][20], int , int );
void print2D(int [20][20], int, int);

int main() {
  int ar[20][20], m, n;

  cout << "Enter row: ";
  cin >> m;
  cout << "Enter column: ";
  cin >> n;

  array_2d_input(ar, m, n);
  print2D(ar, m, n);

  return 0;
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
