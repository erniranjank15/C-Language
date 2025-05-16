#include<stdio.h>
int main(){
    char filename[] = "numbers.txt";
	FILE *file = fopen(filename, "r");
	if(file == NULL){
		printf("file could not be opened");
		return 1;
	}
	
	int temp;
	int sum = 0;
	int read_status;
	
	do{
		read_status = fscanf("%d", &temp, file);
		sum += temp;
	}while(read_status == 1);
	
	printf("the sum of all nos is: %d", sum);
	fclose(file);
	file = NULL;
	return 0;
} 
