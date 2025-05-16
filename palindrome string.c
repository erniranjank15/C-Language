#include<stdio.h>
#include<string.h>

int palindrome(char arr[]){
	int len=strlen(arr),i;
	for(i=0;i<len/2;i++){
		if(arr[i] != arr[len-1-i]){
			return 0;
		}
	}
	
return 1;	
}








int main(){

char text[20];
printf("Enter string:\n");
scanf("%s",text);


if(palindrome(text)){
	puts("Palindrome");
}	
else{
	puts("Not Palindrome");
}
	
	return 0;
}
