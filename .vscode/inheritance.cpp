#include <iostream>
using namespace std;
class inheritance
{
public:
      string brand = "ford";
      void honk()
      {
            cout << "tuuut, tuut! \n";
      }
};

class inh : public inheritance
{
public:
      string model = "mustang";
};
int main()
{
      inh myCar;
      myCar.honk();
      cout << myCar.brand + "   " + myCar.model;
      return 0;
}
