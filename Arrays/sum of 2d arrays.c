#include<stdio.h>

int sum(int arr[][3],int rows,int cols){
	int sum=0,i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		{
				sum+=arr[i][j];
			}
		}
	}
return sum;
}




int main(){
	int arr[][3]={(1,2,3),(4,5,6),(1,2,3)};
	int add=sum(arr,3,3);
	float avg=add/9.0;
	printf("\nAddition of 2D array elements is=%d",add);
	printf("\nAverage of 2D array elements is=%2f",avg);
	
	return 0;
}
