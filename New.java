import java.util.Collections;
import java.util.Scanner;

public class New {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Wizard w1 = new Wizard("Hagrid");
        Wizard w2 = new Wizard("Sirius");
        Wizard w3 = new Wizard("Harry");
        w1 = w2;
        w2 = w3;
        w3 = w1;
        System.out.println(w1.name);
        System.out.println(w2.name);
        System.out.println(w3.name);
        System.out.println("Enter two numbers to swap:");
        int num = scanner.nextInt();
        int num2 = scanner.nextInt();
        System.out.println(num);
    }
}
