#include <iostream>

using namespace std;

void initialize_string(char [],int);


int main()
{

}

int isSubstring(char s[], int m, char t[], int n)
{
    int i, result, length_temp;
    char temp[100];

    for (i = 0; i <= m - n; i = i + 1)
    {
        initialize_string(temp, 100);
        length_temp = stringCopy(temp, s, i, i+(n-1))
        result = stringCompare(temp, t, length_temp);
        if(result == 1){
            break;
        }
    }

    return result;
}
