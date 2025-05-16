#include<stdio.h>
int main(){
	char day[10];
	char month[25];
	int year;
	printf("\n Enter day:");
	scanf("%s",day);
	printf("\n Enter month:");
	scanf("%s",month);
	printf("\n Enter year:");
	scanf("%d",&year);
	printf("Date: %s:%s:%d",day,month,year);
	
	
	return 0;
}
