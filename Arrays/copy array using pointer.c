#include<stdio.h>
int main(){
char arr[8]={'N','I','R','A','N','J','A','N'};
char new_arr[8];
int n ,i;
n=sizeof(arr)/sizeof(arr[0]);
printf("Original Array:");
for(i=0;i<n;i++){
	printf("%c ",arr[i]);
}

for(i=0;i<n;i++){
	*(new_arr+i)=*(arr+i);
}
printf("\nCopied array:");
for(i=0;i<n;i++){
	printf("%c ",new_arr[i]);
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
