import java.util.Scanner;

class Insertion{
    void sort(int arr[],int n){
     //Sorting Logic
        int i,j,value;
        for(i=1; i<n; i++){
            value=arr[i];
            for(j=i; j>0; j--){
                if(arr[j-1]>value)
                    arr[j]=arr[j-1];
                else break;
            }
            arr[j]=value;
        }

        }

    }


public class InsertionSort {
    public static void main(String[] args) {

    //taking input from user
        Scanner scanner =new Scanner(System.in);
        System.out.print("Enter a Size : ");
        int size = scanner.nextInt();
        int arr[]=new int[size];
        System.out.print("Enter Array Elements : ");
        for(int i=0; i< size; i++){
            arr[i]=scanner.nextInt();
        }

        //creating object of Insertion class
        Insertion insertion = new Insertion();
        insertion.sort(arr,size);

        //display the final result
        System.out.print("Sorted Array : ");
            for(int i=0; i<size; i++){
                System.out.print(arr[i]+" ");}
    }
}
