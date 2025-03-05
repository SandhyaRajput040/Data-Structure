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
		A a=new A();
		a.digit(252);
		System.out.println(a.s);
	}
}