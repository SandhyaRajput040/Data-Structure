import java.util.Scanner;

public class TrianglePattren2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a Number : ");
        int num = scanner.nextInt();
        for(int i=1; i<=num; i++){
            for(int j=i; j<=num; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
