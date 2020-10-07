#include <iostream>
using namespace std;

void char_array_initialize(char[], int);
int countVowel(char[], int);
int countDigit(char[], int);
int countSymbol(char [], int);
int char_array_input(char []);
void char_array_uppercase(char[], int, char[]);
void char_array_lowercase(char[], int, char[]);
int isPalindrome(char[], int);
int isEqual(char[], char[], int);
int isSubstring(char[], int, char[], int); //due
int concatString(char[], char[], int, char[], int);
int input_string(char[]);
int char_frequency_string(char a[],int string_size, char ch);
float substring_percentage(char[], int, char[], int); //due
void reverse_string(char[], int, char[]);
int isPalindrome_v2(char[], char[], int);
int strcopy(char[], char[], int, int);
void string_compare(char [],char[], int[], int);
void array_initialize(int [], int);
int array_frequency(int [], int, int);
void bubble_sort(int[], int);
int array_max(int[], int);

int main()
{
    char s[20], t[20], u[100];
    int n , p;
    float percentage;

    char_array_initialize(s, 20);
    char_array_initialize(t, 20);
    char_array_initialize(u, 100);
    n = char_array_input(s);
    p = char_array_input(t);

    percentage = substring_percentage(s, n, t, p);

    cout << percentage;

    return 0;
}

//Makes lowercase characters uppercase
void char_array_uppercase(char c[], int length, char n[])
{
    int i;

    for(i = 0; i < length; i = i + 1){
        if(c[i] >= 'a' && c[i] <= 'z'){
            n[i] = c[i]  - ('a' - 'A');
        }
        else{
          n[i] = c[i];
        }
    }
}

void char_array_lowercase(char c[], int length, char n[])
{
    int i;

    for(i = 0; i < length; i = i + 1){
        if(c[i] >= 'A' && c[i] <= 'Z'){
            n[i] = c[i]  + ('a' - 'A');
        }
        else{
          n[i] = c[i];
        }
    }
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
//counts the vowel
int countVowel(char c[], int n)
{
    int i, v_count;

    v_count = 0;
    for (i = 0; i < n; i = i +1){
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
            v_count = v_count + 1;
    }

    return v_count;
}
//initializes the char array
void char_array_initialize(char c[], int n)
{
    int i;
    for(i = 0; i < n; i = i +1){
        c[i] = '\0';
    }
}
//counts the digits
int countDigit(char c[], int n)
{
    int i, d_count;

    d_count = 0;
    for(i = 0; i < n; i = i + 1){
        if(c[i] >= '0' && c[i] <= '9'){
            d_count = d_count + 1;
        }
    }
    return d_count;
}
//counts how many symbols a char array has
int countSymbol(char c[], int n)
{
    int i, count;

    count = 0;
    for(i = 0; i < n; i = i + 1){
        if((c[i] >= '0' && c[i] <= '9') || (c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z') ){
            count = count + 1;
        }
    }

    return (n - count);
}
//string input
int input_string(char c[])
{
    int i;

    cout << "Enter your string: ";
    cin >> c;

    i = 0;
    while (c [ i ] != '\0'){
        i = i + 1;
    }
    return i;
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

//frequency function
int char_frequency_string(char a[],int string_size, char ch)
{
    int i, freq;

    freq = 0;
    for(i = 0; i < string_size; i++){
        if(a[i] == ch){
            freq = freq + 1;
        }
    }

    return freq;
}
//check if a string is palindrome or not
int isPalindrome(char a[], int length)
{
    int i, pl;

    pl = 1;
    for(i = 0; i < length; i++){
        if(a[i] != a[(length -1) - i]){
            pl = 0;
            break;
        }
    }
    return pl;
}

void reverse_string(char a[], int length, char b[])
{
    int i;

    for(i = 0; i < length; i++){
        b[(length - 1) - i] = a[i];
    }
}

int isPalindrome_v2(char a[], char b[], int length)
{
    int i, pl;

    reverse_string(a, length, b);

    pl = 1;
    for(i = 0; i < length; i++){
        if(isEqual(a, b, length) == 0){
            pl = 0;
        }
    }
    return pl;
}
// Adds up two strings
int concatString(char n[], char a[], int lenght_a, char b[], int length_b)
{
    int i,j,k;

    for(i = 0; i < lenght_a; i++){
        n[i] = a[i];
    }

    k = 0;      //this is to access elements of b
    for(j = i; j < (lenght_a + length_b); j++){     //
        n[j] = b[k];
        k = k + 1;
    }

    return j;
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

//checks if a string is substring of another string return 1 or 0
int isSubstring(char large_string[], int size_of_large_string, char substring[], int size_of_substring)
{
    int i, result, length_temp;
    char temp[20];

    result = 0;
    for (i = 0; i <= size_of_large_string - size_of_substring; i = i + 1)
    {
        char_array_initialize(temp, 20);

        length_temp = strcopy(temp,large_string, i, ( (i + size_of_substring) -1) );

        result = isEqual(temp, substring, size_of_substring);

        if(result == 1){
            break;
        }
    }

    return result;
}

float substring_percentage(char large_string[], int large_s_size, char substring[], int s_size)
{
    int i, length_temp, temp_res[20], freq_temp_res, count_array[20];
    int m;
    char temp[20];
    float result;

    result = 0;
    for (i = 0; i <= large_s_size; i = i + 1)
    {
        char_array_initialize(temp, 20);
        array_initialize(temp_res, s_size);

        //fills up the temporary char array with
        length_temp = strcopy(temp,large_string, i, ( (i + s_size) -1) );

        //compares the temp string according the substring with 0s and 1s
        string_compare(temp,substring,temp_res, s_size);

        //check the frequency of 1s in temp_res array
        freq_temp_res = array_frequency(temp_res, s_size, 1);

        //keeps the of frequency of 1s in temp_res in each iteration
        count_array[i] = freq_temp_res;
    }
    //sort out the count array
    m = array_max(count_array,i-1);
    result = m * 100.0 / s_size;

    return result;
}

//fills up a null array with 0 or 1 based on which element is present
void string_compare(char c[],char d[], int res[], int size_string)
{
    int i, j;

    for(i = 0; i < size_string; i++){
        if(c[i] == d[i]){
            res[i] = 1;
        }
        else{
            res[i] = 0;
        }
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








