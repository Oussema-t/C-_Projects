#include <iostream>
using namespace std;
int
main ()
{
  int a, b = 0, c = 1;

  cout << "geben Sie eine ganze Zahl ein:";
  cin >> a;

  while (a != 0)
    {
      b = b + (a % 2) * c;
      a = a / 2;
      c = c * 10;
     
    }
 cout<<b; 
return 0;
}
