
#include <iostream>

using namespace std;

int prime(int start){
    if(start<=1){
        return 0;
    }
    for(int i= 2; i*i <= start ; i++){
        if(start%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE *file = fopen("num1.txt", "r");
    FILE *output_file1 = fopen("even.txt", "w");
    FILE *output_file2 = fopen("odd.txt", "w");
    FILE *output_file3 = fopen("prime.txt", "w");
    FILE *output_file4 = fopen("non_prime.txt", "w");
    if (file == NULL) {
        cout << "Error opening file" << endl;
        return 1;
    }
    int num;
    int sum_even = 0,sum_odd = 0,sum_prime = 0,sum_non_prime = 0;
    while (fscanf(file, "%d", &num) == 1) {
        sum_even += num;
        if (num % 2 == 0) {
            fprintf(output_file1, "%d\n", num);
            sum_even += num;
        }else{
            fprintf(output_file2, "%d\n", num);
            sum_odd += num;
        }
        if (prime(num)) {
            fprintf(output_file3, "%d\n", num);
            sum_prime += num;
        }else{
            fprintf(output_file4, "%d\n", num);
            sum_non_prime += num;
        }
    }
    fprintf(output_file1, "The sum of even numbers is: %d\n", sum_even);
    fprintf(output_file2, "The sum of odd numbers is: %d\n", sum_odd);
    fprintf(output_file3, "The sum of prime numbers is: %d\n", sum_prime);
    fprintf(output_file4, "The sum of non-prime numbers is: %d\n", sum_non_prime);

    fclose(file);
    fclose(output_file1);
    fclose(output_file2);
    fclose(output_file3);
    fclose(output_file4);
}
