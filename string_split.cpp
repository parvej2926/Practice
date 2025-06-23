#include<iostream>
#include <sstream>
using namespace std;
 int main(){
     string s = "Dept. of cse CU";
     stringstream ss(s);
     string word;
     while(ss>> word){
         cout<< word << endl;
     }
     cout << endl;
     return 0;
 }
