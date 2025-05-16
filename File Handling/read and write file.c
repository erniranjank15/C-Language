#include<stdio.h>
#include<string.h>

int main(){
	FILE *file = fopen("new.txt", "r+");
	if(!file){
		printf("Error opening file");
		return 1;
	}
	
	char buffer[100];
	fgets(buffer, 100, file);
	printf("Reading from file: %s", buffer);
	
	fseek(file, 0, SEEK_END);
	fputs("This message was written by you:\n", file);
	
	fclose(file);
	file=NULL;
	return 0;
}
