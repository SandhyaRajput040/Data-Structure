#include<stdio.h>
  
 
//function for find max in array

int findSecondMax(int arr[],int n){
	int max=arr[0];
	int secondmax=0;
	for(int i=1; i<n; i++){
		if(max<arr[i])
		{
			secondmax=max;
			max=arr[i];
		}
		//else if(arr[i]!=max && max<arr[i])
		else if( arr[i]<max && arr[i]>secondmax)
		{
			secondmax=arr[i];
		}
	}
	return secondmax;
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
	int arr[]={2,5,66,405,45};
	
	 printf("\n\nMax Eemnts is : %d",findSecondMax(arr,size));
	 return 0;
}