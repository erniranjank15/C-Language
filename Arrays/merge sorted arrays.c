#include<stdio.h>







/*void print_arr(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
	printf("%d",arr[i]);	
	}
}

void merge_array(int arr1[],int size1, int arr2[], int size2, int arr3[], int size3){
	int i=0,j=0,k=0;
	while(k<size3){
		if(j==size2 || (i<size1 && arr1[i]<arr2[j]))
		{
			
		arr3[k]=arr1[i++];	
		}
		else{
			arr3[k]=arr2[j++];
		}
		k++;
	}
}


*/




int main(){
int arr1[5]={1,3,5,7,9};
int arr2[7]={2,4,6,8,10,12,14};	
int arr3[12];

printf("Merged array=");

	int i=0,j=0,k=0;
	while(k<12){
		if(j==7 || (i<5 && arr1[i]<arr2[j]))
		{
			
		arr3[k]=arr1[i++];	
		}
		else{
			arr3[k]=arr2[j++];
		}
		k++;
	}
	
	
	for(i=0;i<12;i++){
	printf("%d ",arr3[i]);	
	}
//merge_array(arr1,5,arr2,7,arr3,12);
//print_array(arr3,12);
	return 0;
}


