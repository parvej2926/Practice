#include<stdio.h>
int prime(int start){
    if(start<=1){
         return 0;
    }
    for(int i= 2; i*i <= start ; i++){
        if(start%i==0)
            {
                return 0;
            }

    }
    return 1;
}
int prime_range(int start , int end)
{
    if(start>end){
        printf("invalid input");
        return 0;
    }
    for(int i=start; i<=end; i++){
         if(prime(i)){
             printf("%d \t", i);
         }
     }
    printf("\n");
    return 1;
}
int main()
{
    int start, end;
    printf("start:");
    scanf("%d", &start);

    printf("end:");
    scanf("%d", &end );

    printf("prime numbers:");
    prime_range(start, end);

}
