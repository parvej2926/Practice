import java.util.Scanner;

public class Textedit {

    public static void main(String[] args) {
        FILE * fp;
        fp = fopen("Text.txt", "r");

        while (!feof(fp))
            {
                fscanf(fp, "%d", &j);
                if (j%5==0)
                {
                    printf("%d\n", j);
                    fprintf(fp2,"%d\n", j);
                }

            }
            fclose(fp);
    }
}
