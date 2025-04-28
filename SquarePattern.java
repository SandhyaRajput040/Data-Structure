import java.util.Scanner;
public class SquarePattern {

    public static void main(String ar[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number : ");
        int num =sc.nextInt();

        for(int i=1; i<=num; i++){
            for(int j=1; j<=num; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
