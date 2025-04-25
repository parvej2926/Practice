import java.io.*; //file reader

public class Three {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("num.txt"));
        String c;

        while ((c = br.readLine()) != null) {
            int max = Integer.MIN_VALUE;
            int num = 0;
            boolean hasNum = false;

            for (int i = 0; i < c.length(); i++) {
                char ch = c.charAt(i);

                if (ch >= '0' && ch <= '9') {
                    num = num * 10 + (ch - '0');
                    hasNum = true;
                } else if (ch == ',' || ch == '\n') {
                    if (hasNum) {
                        if (num > max) max = num;
                        num = 0;
                        hasNum = false;
                    }
                }
            }

            // Handle the last number (if no comma/newline at end)
            if (hasNum) {
                if (num > max) max = num;
            }

            System.out.println(max);
        }

        br.close();
    }
}
