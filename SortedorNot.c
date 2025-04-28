#include<stdio.h>
  
 //both are coorect
//for assecending 

int checkSorted(int arr[],int n){
	
	for(int i=0; i<n; i++){
		
		if(arr[i]<arr[i+1]){
			
		}
		else{
			return 0;
		}
		
	}
	return 1;
}
//for non assecending 
// int checkSorted(int arr[],int n){
	
	// for(int i=1; i<n; i++){
		
		// if(arr[i]>arr[i-1]){
			
		// }
		// else{
			// return 0;
		// }
		
	// }
	// return 1;
// }

 
int main(){

    int size;
	printf("Enter Size : ");
	scanf("%d",&size); 
	int arr[size];
	printf("Enter Elemnts : ");
	for(int i=0; i<size; i++){
		 scanf("%d",&arr[i]);
	}
	
	// int size=5;
	// int arr[]={2,5,6,45,4};
	if(checkSorted(arr,size))
	 printf("\n\nArray is Sorted ");
    else
	 printf("\n\nArray is not Sorted");
	 return 0;
}