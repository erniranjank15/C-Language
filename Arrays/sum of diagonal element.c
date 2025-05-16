#include<stdio.h>
const int size=3;

void diagonal_sum(int arr[][size]){
	
	int i,j;
	int sum_left_diagonal=0;
	int sum_right_diagonal=0;
	for(i=0;i<size;i++){
		sum_left_diagonal+=arr[i][i];
		sum_right_diagonal+=arr[i][size-1-i];
	}
	
	printf("\nSum of left diagonal element is=%d",sum_left_diagonal);
		printf("\nSum of right diagonal element is=%d",sum_right_diagonal);
}

int main(){
	
	int arr[3][3]={(1,2,3), (4,5,6), (1,2,3)};
	diagonal_sum(arr);
	
	
	return 0;
}
