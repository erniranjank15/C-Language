#include<stdio.h>
#include<stdlib.h>
int main(){

int size,i;
printf("Enter no. of elements:");
scanf("%d",&size);

float *arr = (float*)malloc(size*sizeof(float));
if(arr == NULL){
	printf("Short of Memory !!!");
}	


for(i=0;i<size;i++){
	printf("Now enter element no. %d = ",(i+1));
	scanf("%f",&arr[i]);
}


for(i=0;i<size;i++){
	printf("%2f ",arr[i]);
}	
	
free(arr);
arr=NULL;
	
	
	
	
	
	
	
	return 0;
}
