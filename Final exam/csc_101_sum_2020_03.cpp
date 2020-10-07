#include <iostream>
using namespace std;

int char_array_input(char []);
int substring_pos(char [], int , char [], int , int []);
int strcopy(char[], char[], int, int);
int isEqual(char[], char[], int);
void array_set_print(int [], int );
void char_array_initialize(char [], int);
void array_initialize(int [], int);

int main()
{
    char s1[100], s2[20];
    int s_s1, s_s2, pos[10], s_pos;

    cout << "Larger string" << endl;
    s_s1 = char_array_input(s1);

    cout << "Smaller string" << endl;
    s_s2 = char_array_input(s2);

    s_pos = substring_pos(s1, s_s1,s2, s_s2, pos);

    if (s_pos > 0){
        cout << s2 << " occurs at locations ";
        array_set_print(pos, s_pos);
        cout << " in the string " << s1;
    }
    else{
        cout << s2 << " occurs at locations ";
        cout << -1;
        cout << " in the string " << s1;
    }

    return 0;
}
//Inputs an char array and returns size
int char_array_input(char c[])
{
    int i;

    cout << "Enter character/s: ";
    cin >> c;

    i = 0;
    while (c [ i ] != '\0'){
        i = i + 1;
    }
    return i;
}
//checks if a string is substring of another string return 1 or 0
int substring_pos(char large_string[], int size_of_large_string, char substring[], int size_of_substring, int pos_sub[])
{
    int i, result, length_temp, total, k;
    char temp[20];

    array_initialize(pos_sub, size_of_substring);

    result = 0;
    total = 0;
    k = 0;
    for (i = 0; i <= size_of_large_string - size_of_substring; i = i + 1)
    {
        char_array_initialize(temp, 20);

        length_temp = strcopy(temp,large_string, i, ( (i + size_of_substring) -1) );

        result = isEqual(temp, substring, size_of_substring);

        if(result == 1){
            pos_sub[k] = i +1;
            total = total + 1;
            k = k +1;
        }
    }

    return total;
}


    //prints out an int array in a set
void array_set_print(int a[], int size)
{
    int i;

    for(i = 0; i < size - 1; i ++){
        cout << a[i] << "," ;
    }
    cout << a[i];

}
//initializes the char array
void char_array_initialize(char c[], int n)
{
    int i;
    for(i = 0; i < n; i = i +1){
        c[i] = '\0';
    }
}
//copies string from a specific position till a specific position
int strcopy(char cpy[], char copy_from[], int pos_of_copy, int copy_till)
{
    int i;

    for(i = pos_of_copy; i <= copy_till; i++){
        cpy[i - pos_of_copy] = copy_from[i];
    }

    return copy_till - pos_of_copy + 1;
}
//function to see if two char arrays are equal or not
int isEqual(char a[], char b[], int length)
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
// Function to initialize an array
void array_initialize(int a[], int array_size)
{
    int i;

    for(i = 0; i < array_size; i = i + 1){
        a[i] = 0;
    }
}

