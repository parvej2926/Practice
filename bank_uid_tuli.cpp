#include<iostream>
#include<map>
using namespace std;

int main(){

 map<string,int>m;
  m["A"] = 10;
  m["B"] = 20;
  m["C"] = 30;
  m["D"] = 15;

  map<string,int>n;
  n["K"] = 10;
  n["B"] = 50;
  n["L"] = 30;
  n["D"] = 15;

  for (auto it : m) {
      if(n.find(it.first)!=n.end()){
          cout << it.first << endl;
      }
  }


}
