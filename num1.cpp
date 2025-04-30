#include <iostream>
#include <fstream>
#include <set>
#include <map>

using namespace std;

bool isprime(int num){

    if(num<=1) return 0;
    for(int i=2; i*i <=num; i++){
       if(num%i==0){
           return 0;
           break;
        }

    }
    return 1;
}

int main(){
    ifstream file("num1.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int number;
    while (file >> number) {
        cout << "Read integer: " << number << endl;
        if(isprime(number))
            cout << number << " is prime " << endl;

        else {
            while(1){
                int num = number+1;
                if(isprime(num)){
                    cout<< num-number << "for " << number <<  " to be next prime\n"; 
                    break;
                }

            }
        }
            
    }
    file.close();
    return 0;
}

