#include<iostream>
#include<list>

using namespce std;

int main(){
    list<int> numbers= {1,2,3};
    cout << "initial list";
    for(int number:numbers){
        cout<< numbers << ",";
    }
    numbers.push_front(0);
    numbers.push_back(4);

    cout << "final list";
    for(int number:numbers){
        cout<< numbers << ",";
    }
    return 0;
}
