#include<iostream>
using namespace std;
int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2 ; i*i <= n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int prime_range(int a , int b){
    for(int i= a; i<= b; i++){
        prime(i);
        cout<<i<<"    ";
    }
    return 0;
}
int main(){

    int a,b;
    cout<<"Enter two numbers (first num < second num): ";
    cin>>a>>b;
    prime_range(a,b);


}
