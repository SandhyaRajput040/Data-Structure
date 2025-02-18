#include<stdio.h>
  
 //remove duplicate from sortend array
 int removeDuplicate(int arr[], int n){
	// int s=0;
	 int i=0;
	 for(int j=1; j<n; j++)
	 { 
         if(arr[i]!=arr[j]) 
		 {
			 arr[i+1]=arr[j];
		   i++;  	 
		 }
	 }
	 return i+1;
 }
 
int main(){                                                    

     // int size;
	// printf("Enter Size : ");
	// scanf("%d",&size); 
	// int arr[size];                           
	// printf("Enter Elemnts : ");
	// for(int i=0; i<size; i++){
		 // scanf("%d",&arr[i]);
	// }
	
	int size=5;
	int arr[]={1,1,2,2,3};
	
	 printf("\n\n%d",removeDuplicate(arr,size));
	 return 0;
}