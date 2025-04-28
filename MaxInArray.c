#include<stdio.h>
  
 
//function for find max in array

int findMax(int arr[],int n){
	int max=arr[0];
	for(int i=1; i<n; i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
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
	
	 printf("\n\nMax Eemnts is : %d",findMax(arr,size));
	 return 0;
}