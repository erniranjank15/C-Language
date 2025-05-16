#include<stdio.h>
#include<string.h>

void reverse(char str[]){
	
	int length=strlen(str),i;
	
	for(i=0;i<length/2;i++){
		char temp=str[i];
		str[i]=str[length-1-i];
		str[length-1-i]=temp;
	}
}





int main(){
char text[100];
printf("enter text: \n");
fgets(text, sizeof(text), stdin);

puts("original string:");
puts(text);
reverse(text);
puts("after reverse: ");
puts(text);

	
	
}
