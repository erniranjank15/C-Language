#include<stdio.h>


void min_max(int* a,int* b,int* min, int* max)
{
	if(*a<*b){
		*min=*a;
		*max=*b;
	}
	else{
		*min=*b;
		*max=*a;
	}
}






int main(){
//1)
	/*
	int num;
	int *ptr=&num;
	printf("Enter value=");
	scanf("%d",&num);
	
	printf("value of num=%d ",*ptr);
	printf("value of num=%d",num);
*/

//2)
/*
	int num=5;
	int *ptr=&num;
	*ptr=10;
	printf("value of num=%d",num);
*/


//3)
/*
	char character;
	char *ptr=&character;
	printf("Enter value=");
	scanf("%c",ptr);
	
	printf("value of char=%c ",*ptr);
	printf("value of char=%c",character);
	*/
	
	//4)
	
	
	
	int a,b,min,max;
	printf("Enter a= ");
	scanf("%d",&a);
	printf("Enter b= ");
	scanf("%d",&b);
	
	min_max(&a,&b,&min,&max);
	printf("min=%d and max=%d",min,max);
	
	return 0;
}
