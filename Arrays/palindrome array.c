#include<stdio.h>
int main(){
	int n[5]={1,5,9,5,1},i;
    int flag=0;
for(i=0;i<5/2;i++)	
{
	if(n[i]==n[5-1-i]){
		flag=1;
	}
	else{
	flag=0;
	}

}
	if(flag==1){
	
		printf("Palindrome Array");
}
else{
		printf("Not Palindrome Array");
}
	
	
	
	return 0;
}
