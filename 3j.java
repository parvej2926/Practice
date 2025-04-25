public class Threej {

    public static void main(String[] args) {
        {
            FILE * file = fopen("num.txt", "r");
            if (!file) {
                System.out.println("Error opening file!");
                return 1;
            }

            char ch;
            int num = 0, max = -2147483648; // Smallest int
            bool hasNum = false;

            while (!feof(file)) {
                ch = fgetc(file);
                if (ch >= '0' && ch <= '9') {
                    num = num * 10 + (ch - '0');
                    hasNum = true;
                } else if (ch == ',' || ch == '\n') {
                    if (hasNum) {
                        if (num > max) max = num;
                        num = 0;
                        hasNum = false;
                    }
                    if (ch == '\n') {
                        System.out.println(max);
                        max = -2147483648;
                    }
                }
            }

            // For last line (if no newline at end)
            if (hasNum && num > max) max = num;
            if (hasNum) System.out.println(max);

            fclose(file);
            return 0;
        }
    }
}
