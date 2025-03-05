class Sort{
void divide(int arr1[], int n){

if(n<2)return;

int size1=n/2;	
int size2=n-size1;	

int arr2[]=new int[size1];
int arr3[]=new int[size2];
	
for(int i=0; i<size1; i++){
	arr2[i]=arr1[i];
}
for(int i=0; i<size2; i++){
	arr3[i]=arr1[size1+i];
}	
	divide(arr2,size1);
	divide(arr3,size2);
	merge(arr2,arr3,arr1,size1,size2);
	
	  
}

void merge(int x[],int y[],int z[] ,int n1, int n2 ){
	int i,j,k=0;
	for(i=0,j=0; i<n1 && j<n2;){
		if(x[i]<y[j]){
			z[k++]=x[i++];
		}
		else{
			z[k++]=y[j++];
		}
		
	}
	while(i<n1)
			z[k++]=x[i++];
	while(j<n2)
			z[k++]=y[j++];
	
}
}

class MergeSort
{
public static void main(String arr[]){
	
	int arr1[]={5,4,3,2,1};
	int size=5;
	
	
	Sort s=new Sort();
	s.divide(arr1,size);
	
	
	for(int i=0; i<size; i++){
		System.out.println(arr1[i]);
	}
}
}