#include<stdio.h>
#include<string.h>
int main(){
	const char PASSWARD[]="Niranjan123";
	char passward[50];
	printf("Welcome to secure system\n");
	printf("Enter your passward: ");
	fgets(passward, sizeof(passward),stdin);
	
	if(strcmp(passward,PASSWARD)==0){
		puts("Access Granted to the system.");
	}
	else{
		puts("Access Denied to the system");
	}
	
	
	
	
	return 0;
	}
