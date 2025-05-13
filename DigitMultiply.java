import java.util.Scanner;

class A{
int s=1;

void digit(int n){
        if(n==0)return;
        s=s*(n%10);
        digit(n/10);	
}

}
class DigitMultiply{
	public static void main(String args[]){
		Scanner scanner =new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int num = scanner.nextInt();
		A a=new A();
		a.digit(num);
		System.out.println(a.s);
	}
}