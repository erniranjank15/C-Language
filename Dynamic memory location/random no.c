#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	printf("Welcome to world of dynamic randoms\n");
	int *arr = (int*) calloc(10, sizeof(int));
	if(arr == NULL){
		printf("Memoey Error!!!");
		return 1;
	}
	
	
	srand(time(NULL));
	for(i=0;i<10;i++){
		arr[i] = rand() % 100;  //random number with range 0-99
	}
	
	printf("\n Here are your random numbers:");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
