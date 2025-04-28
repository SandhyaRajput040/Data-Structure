import java.util.Scanner;

public class RightTriangle {
    public static void main(String[] args) {
        Scanner scanner =new Scanner(System.in);
        System.out.print("Enetr a Number :");
        int num = scanner.nextInt();
        for(int i =1; i<=num; i++){
            for(int k=i; k<=num; k++ ){
                System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
