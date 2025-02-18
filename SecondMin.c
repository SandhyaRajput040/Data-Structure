#include<stdio.h>
  
 
//function for find max in array

int findSecondMin(int arr[],int n){
	int min=arr[0];
	int secondmin=arr[0];
	for(int i=1; i<n; i++){
		if(min>arr[i])
		{
			secondmin=min;
			min=arr[i];
		}
		else if( arr[i]>min && arr[i]<secondmin)
		{
			secondmin=arr[i];
		}
	}
	return secondmin;
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
	int arr[]={2,5,6,45,4};
	
	 printf("\n\nmin Eemnts is : %d",findSecondMin(arr,size));
	 return 0;
}