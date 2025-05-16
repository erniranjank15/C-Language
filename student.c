#include<stdio.h>

struct student{
	int id;
	char name[30];
	int marks;
}s;



int main(){
	printf("----------welcome----------\n");
	printf("Enter Roll no.:");
	scanf("%d",&s.id);
	printf("\nEnter name: ");
	scanf("%s",&s.name);
	printf("Enter marks:\n ");
	scanf("%d",&s.marks);
	
	printf("\nDetails");
	printf("\nRoll no.:%d\n",s.id);
	printf("\nName: %s\n",s.name);
	printf("\nMarks:%d \n",s.marks);
	return 0;
}
