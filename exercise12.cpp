
#include <iostream>
using namespace std;
int main()
{
  double x, y;
  cout<<"ÊäÈëx:";
  cin >> x;
  if (x < 1)
      y = x * x - 1;
  else if ( x < 10)
      y = 2 * x - 1;
  else
     y = 3 * x - 1;
     cout << "y=" << y <<endl;
  return 0;
}