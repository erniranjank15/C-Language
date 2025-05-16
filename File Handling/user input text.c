#include<stdio.h>
#include<string.h>
int main(){
	FILE *file = fopen("user input text", "w");
	if(!file){
		printf("could not open file");
		return 1;
	}
	
	
	char input[100];
	while(1){
		fgets(input, 100, stdin);
		if (strcmp(input, "exit") == 0) break;
		fputs(input, file);
	}
	
	fclose(file);
	file=NULL;
	return 0;
}
