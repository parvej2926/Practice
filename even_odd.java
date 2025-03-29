import java.util.Scanner;


public class Even_Odd {
	/*
	public static boolean even_odd(int a) {
		if(a%2==0) {
			return true;
		}
		else {
			return false;
		}
	}
    */
	public static void main(String [] args) {
		Scanner I = new Scanner(System.in);
		
		System.out.print("enter a digit");
		int a = I.nextInt();
		if(a%2==0) {
			System.out.print("even");
		}
		else {
			System.out.print("odd");
		}
		/*
		if(even_odd(a)) {
			System.out.print("even");
		}
		else {
			System.out.print("odd");
		}
		*/
	}

}

