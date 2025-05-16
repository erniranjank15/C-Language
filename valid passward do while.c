#include<stdio.h>
#include<string.h>
int main(){
	const char PASSWARD[]="Niranjan123";
	char passward[50];
	printf("Welcome to secure system\n");
	
	do{
		printf("Enter correct passward: ");
		scanf("%s", passward);
	}while(strcmp(passward,PASSWARD) !=0);
	
	printf("\n Access Granted");
	
	
	return 0;
}
