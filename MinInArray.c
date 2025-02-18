#include<stdio.h>
  
 
//function for find max in array

int findMin(int arr[],int n){
	int min=arr[0];
	for(int i=1; i<n; i++){
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	return min;
}

 
int main(){

    int size;
	printf("Enter Size : ");
	scanf("%d",&size); 
	int arr[size];
	printf("Enter Elemnts : ");
	for(int i=0; i<size; i++){
		 scanf("%d",&arr[i]);
	}
	// int m=findMax(arr,size);
	// int size=5;
	// int arr[]={2,5,6,45,4};
	
	 printf("\n\nMax Eemnts is : %d",findMin(arr,size));
	 return 0;
}