#include <iostream>

using namespace std;

int main()
{
      int x, y, i, temp;

      cout << "Enter a number: ";
      cin >> x;
      cout << "Enter another number: ";
      cin >> y;

      if (x > y){
          temp = x;
          x = y;
          y = temp;
      }

      for (i = y; i > 0; i = i - 1){
          if ((x % i == 0) && (y % i == 0)){
              cout << "HCF = " << i;
              break;
           }
      }

      return 0;
}
