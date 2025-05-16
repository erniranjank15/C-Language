#include<stdio.h>
int main(){
	int arr[]={1,2,5,7,8,9,4,3},i;
	printf("Array before reverse:");
	
	for(i=0;i<8;i++){
		printf("%d ",arr[i]);
	}
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
		printf("Reversed array: ");
	//1st method
	/*
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	*/
	
	//2nd method
	
	
	for(i=0;i<n/2;i++){
		int temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}


    for(i=0;i<8;i++){
	printf("%d ",arr[i]);
}

	return 0;
}
