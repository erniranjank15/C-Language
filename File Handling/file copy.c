#include<stdio.h>
int main(){
	FILE *source_file = fopen("new.txt", "r");
	FILE *dest_file = fopen("numbers.txt", "w");
	
	if(source_file == NULL || dest_file == NULL){
		printf("Error while opening file.");
		return 1;
	}
	
	while(1){
		char c = fgetc(source_file);
		if(c == EOF) break;
		fputc(c, dest_file);
		printf(".");
	
	}
	
	fclose(source_file);
	fclose(dest_file);
	dest_file=source_file=NULL;
	
	return 0;
}
