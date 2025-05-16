#include<stdio.h>
#include<string.h>
int main(){
	char input[100];
	char trimmed[100];
	printf("Enter text:\n");
	fgets(input, sizeof(input), stdin);
	
	int start=0;
	int end=strlen(input)-1;
	
	while(input[start] == ' ') start++;
	while(input[end] == ' ') end--;
	
	int i=0;
	while(i<=end-start){
		trimmed[i]=input[i+start];
		i++;
	}
	
	trimmed[i]='\0';
	printf("trimmed string is:%s\n",trimmed);
	
	
	
	return 0;
}
