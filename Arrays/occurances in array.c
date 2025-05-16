#include<stdio.h>
int occurances(int arr[],int size ,int element){
int counter=0,i;
for(i=0;i<size;i++){
	if(arr[i]==element){
		counter++;
	}
}



	return counter;
}





int main(){
	int arr[]={3,6,7,98,45,3,6,3,71,10};
	printf("No. of occurances");
	int result=occurances(arr,10,6);
	printf("No. of occurances of 6 are %d\n",result);
	result=occurances(arr,10,98);
	printf("No. of occurances of 98 are %d\n",result);
	result=occurances(arr,10,3);
	printf("No. of occurances of 3 are %d\n",result);
	result=occurances(arr,10,100);
	printf("No. of occurances of 100 are %d\n",result);
	
	
	
	
	
	
	
	return 0;
}
