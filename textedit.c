#include<stdio.h>
int main()
{
    int i, j;
    FILE *fp, *fp2;
    fp = fopen("in.txt", "r");
    fp2 = fopen("out.txt", "w");

    while (!feop(fp))
    {
        fscanf(fp, "%d", &j);
        if (j%5==0)
        {
            printf("%d\n", j);
        }
        
    }
    fclose(fp);
    fclose(fp2);
    return 0;
    
}
