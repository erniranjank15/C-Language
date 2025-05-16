#include<stdio.h>

int search(int arr[][3],int rows,int cols,int element){
	int occ=0,i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(arr[i][j]==element){
				occ++;
			}
		}
	}
return occ;
}



int main(){
	int arr[][3]={(1,2,3),(4,5,6),(1,2,3)};
	int occ=search(arr,3,3,1);
	printf("\nSearching for 1 found occ=%d",occ);

	
	return 0;
}
