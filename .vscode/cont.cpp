
// polymorphysom
// funtion overloading

#include <iostream>
using namespace std;
int plusFunc(int x, int y)
{
      return x + y;
}
double plusFunc(double x, double y)
{
      return x + y;
}
int main()
{
      int myNum = plusFunc(8, 5);
      double myNum1 = plusFunc(4.3, 5.9);

      cout << myNum << "\n";
      cout << myNum1;
}
