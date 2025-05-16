#include<stdio.h>

int main(){
	char filename[100];
	printf("Please enter the file name: ");
	scanf("%99s", filename);
	
	FILE *file = fopen(filename, "r");
	if(file != NULL){
		printf("%s was opened successfully", filename);
		fclose(file);
	}
	else{
		printf("file was not found");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
