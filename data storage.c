#include<stdio.h>
#include<limits.h>
int main(){
	/*
	const float mile=0.621371;
	long kms;
	//take in kilometer and convert miles
	printf("Enter number=");
	scanf("%ld",&kms);
	//suppose we take as 1km=10000M
	long meters=kms*mile;
	//printf("Meters=%ld\n",meters);
	long meters2=kms*mile;
	//printf("Meters=%lld",meters);
	
	printf("long=%ld\n",sizeof(long));
		
	printf("long long=%d\n",sizeof(long long));
	printf("int=%d\n",sizeof(int));
	printf("float=%d\n",sizeof(float));
	printf("double=%d\n",sizeof(double));
	printf("character=%d\n",sizeof(char));
	*/
	
	
	/*
	int n,i;
	//long fact=1;
	long long fact=1;
	printf("Enter number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorial=%ld\n",fact);
	printf("Factorial=%lld",fact);
	*/
	
	
	
	//unsigned int and max value of int
	
	unsigned int positive=UINT_MAX;
	int normal=INT_MAX;
	
	printf("Max value of unsigned int is:%u",positive);
	printf("\n Max value of normal int is:%d",normal);
	positive++;
	normal++;
	printf("\nMax value of unsigned int is:%u",positive);
	printf("\n Max value of normal int is:%d",normal);
	return 0;
}
