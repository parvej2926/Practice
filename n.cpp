#include <sstream>
#include <iostream>
using namespace std;

int main(){
string idStr;

//int id = 123456;  //12345
char id[] = "ABCD";
stringstream ss(id);   //1

//ss << id;

idStr = ss.str();
cout << idStr << endl;
return 0;
}
