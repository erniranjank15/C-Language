#include<stdio.h>
int main(){
	char name[25];
	printf("Enter full name: ");
	fgets(name, sizeof(name), stdin);
	puts(name);
	
	
	return 0;
}
