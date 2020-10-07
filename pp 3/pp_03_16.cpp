#include <iostream>

using namespace std;

int main()
{
  float x, y;

  cout << "Enter X coordinate: ";
  cin >> x;
  cout << "Enter Y coordinate: ";
  cin >> y;


  if (x > 0 && y > 0){     //1st qdrnt
      cout << "1st quadrant";
  }
  else if (x < 0 && y > 0){     //2nd qdrnt
      cout << "2nd quadrant";
  }
  else if (x < 0 && y < 0){     //3rd qdrnt
      cout << "3rd quadrant";
  }
  else if (x > 0 && y < 0){     //4th qdrnt
      cout << "4th quadrant";
  }
  else if (x == 0 && y != 0){     //Y axis
      cout << "Y axis";
  }
  else if (x != 0 && y == 0){     //X axis
      cout << "X axis";
  }
  else {       //Origin point
      cout << "Origin";
}

  return 0;
}
