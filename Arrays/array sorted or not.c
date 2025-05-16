#include<stdio.h>
int is_sorted(int arr[],int size){
	int increasing=1,i;
	int decreasing=1;
	
	for(i=0;i<size;i++){
		if(arr[i]>arr[i-1]){
			decreasing=0;
		}
		else if(arr[i]<arr[i-1]){
			increasing=0;
		}
	}
	return increasing || decreasing;
}







int main(){
	int a[6]={5,8,9,10,12,15};//increasing order sorted
	int b[6]={65,58,49,30,19,15};//decreasing order sorted
	int c[6]={55,8,95,10,123,15};//not sorted
	
	if(is_sorted(a,6)){
		printf("Frist array is sorted\n ");
	}
	else{
		printf("Frist array is not sorted\n ");
	}
	
		if(is_sorted(b,6)){
		printf("Second array is sorted\n ");
	}
	else{
		printf("Second array is not sorted\n ");
	}
	
		if(is_sorted(c,6)){
		printf("Third array is sorted \n");
	}
	else{
		printf("Third array is not sorted\n ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
