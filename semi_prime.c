#include<stdio.h>
#include<math.h>

int is_prime(int N){
    if(N<=3) return 0;
    for (int i= 2 ; i <= sqrt(N); i++){
        if(N % i == 0) return 0;
    }
    return 1;
}

int semi_prime(int N){
    for(int i=2 ; i<=N; i++ ){
        if(is_prime(i)){
            for(int j =2 ; j<=N; j++){
                if(is_prime(j) && (i*j == N)){
                    return 1;
                }
                else return 0;
            }
        }
    }
}
int main(){
    int N;
    printf("enter a num:  ");
    scanf("%d", &N);
    if(N<=3)
        {
            printf("invlid");
            return 0;
        }
    int result = semi_prime(N);

    if(result== 1)
        {
            printf("semi prime");
        }
    if(result!=1)
        {
           printf("not semi prime");
        }
    return 0;

}
