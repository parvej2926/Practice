#include <iostream>
#include <string>
using namespace std;
class MyClass
{
public:
      int myNum;
      string myString;
};

int main()
{
      MyClass myObj;
      myObj.myNum = 15;
      myObj.myString = "Some text";

      cout << myObj.myNum << "\n";
      cout << myObj.myString << "\n";
      return 0;
}
