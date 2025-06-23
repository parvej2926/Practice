#include<iostream>
using namespace std;

class Vehicle{
    protected:
        string brand = "Ford";
        void honk(){
            cout<<"Tuut,tuut!\n";
        }
};
class Car:private Vehicle{
    public:
        //string brand = "Mustang";
         string model = "X";
        void honk(){
            cout<<"beep beep!\n";
        }
};

int main(){
    Car mycar;
   // mycar.honk();
   mycar.brand = "xyz";
    cout<<mycar.brand<<endl;
    return 0;
}
