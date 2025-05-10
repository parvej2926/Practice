#include <iostream>
#include<cmath>

using namespace std;

int is_prime(int N){
    if (N<1) return 0;
    if(N<=3) return 1;
    for (int i= 2 ; i <= sqrt(N); i++){
        if(N % i == 0) return 0;
    }
    return 1;
}

int semi_prime(int N) {
    for (int i = 2; i <= sqrt(N); i++) {
        if (is_prime(i)) {
            int j = N / i;
            if (N % i == 0 && is_prime(j)) {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int N;
    cout << "enter a num:  ";
    cin >> N;
    if(N<=3)
        {
            cout << "invlid";
            return 0;
        }
    int result = semi_prime(N);

    if(result== 1)
        {
            cout << "semi prime";
        }
    if(result!=1)
        {
           cout << "not semi prime";
        }
    return 0;

}

/*
