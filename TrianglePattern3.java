import java.util.Scanner;

public class TrianglePattern3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter  a NUmber : ");
        int num = scanner.nextInt();
        for(int i=1; i<=num; i++){
           for(int k=1; k<=i; k++){
               System.out.print(" ");
           }
            for(int j=i; j<=num; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
