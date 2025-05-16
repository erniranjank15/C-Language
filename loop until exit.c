#include<stdio.h>
#include<string.h>
int main(){
	const char EXIT[]="exit";
	char command[20];
	
	while(1){
		printf("Enter your command: ");
		scanf("%s",command);
		if(!strcmp(command, EXIT)){
			break;
		}
	}
	printf("\n Existed Successfully");
	
	return 0;
}
