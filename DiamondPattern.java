import java.util.Scanner;

public class DiamondPattern {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.print("Enter a Number : ");
        int num = scanner.nextInt();
        for(int i=1; i<=num; i++){
            for(int j=1; j<=num; j++){
            // if(i+j>=7 && j-i<6 && i+j<=17 && i-j<=5 )
 if(i+j>=num-(num/2-1) && j-i<num-(num/2) && i+j<=num+(num/2+1) && i-j<=num/2 ) {
          System.out.print("*");
            }else{
            System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
