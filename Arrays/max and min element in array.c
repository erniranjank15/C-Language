#include<stdio.h>
int main(){
	int arr[10],i;
	printf("Enter the elements:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	int min=arr[0];
	int max=arr[0];
	for(i=0;i<10;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
	}
	
	printf("Max=%d ",max);
	printf("Min=%d ",min);
	return 0;
}
