#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A(){
            a= 10;
        }
};
class B: public virtual A{
    public:
        int a= 5;

};
class C : public virtual A{
    public:
     //   int a=7;
};
class D : public B, public C{
    public:
        int a= 9;
};
int main(){
    D obj;
    cout << "a= " << obj.a ;
    return 0;
}
