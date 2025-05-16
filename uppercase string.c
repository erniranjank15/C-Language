#include<stdio.h>
#include<ctype.h>
int main(){
	int i;
	char text[100];
	printf("Enter your text: ");
	fgets(text, sizeof(text), stdin);
	
	for(i=0;text[i]!='\0';i++){
		text[i]=toupper(text[i]);
		//text[i]=tolower(text[i]);
	}
	
	printf(" Result= %s",text);
	
	
	
	return 0;
}
