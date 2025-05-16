#include<stdio.h>
int main(){
	/*int n;
	
	printf("Enter value of n=\n");
	scanf("%d",&n);
	*/
	
		// determine no. is positive , negative ,zero
	/*
	if(n>0){
		printf("No.is postive");
	}
	else if(n<0){
	printf("No.is negative");
	}
	else{
		printf("No.is Zero");
	}
	*/
	
	
	//determine no. is even or odd
	/*
	if(n%2==0){
			printf("No.is even");
	}
	else{
			printf("No.is odd");
	}
	*/
	
	//determine greatest no. in 3 nos
	/*
	int a,b,c;
	printf("Enter value of a=\n");
	scanf("%d",&a);
	printf("Enter value of b=\n");
	scanf("%d",&b);
	printf("Enter value of c=\n");
	scanf("%d",&c);
	
	if(a<b && b>c){
		printf("Greatest no.=%d",b);
	}
	else if(a>b && c<a){
		printf("Greatest no.=%d",a);
	}
	else{
		printf("Greatest no.=%d",c);
	}
	*/
	
	//determine leap year
	/*
	int year;
	printf("Enter year\n");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)//ensure condition must be in this format
	{
		printf("Leap year");
	}
	else{
		printf("Not a leap year");
	}
	*/

//calculate grades on marks
/*
int marks;
printf("Enter marks=");
scanf("%d",&marks);
if(marks>90){
	printf("A");
}
else if(marks>75){
	printf("B");
}
else if(marks>60){
	printf("C");
}
else if(marks>30){
		printf("D");
}
else{
		printf("F");
}
*/

//categorize a person into age groups
/*
int age;
printf("Enter age=");
scanf("%d",&age);
if(age<13){
	printf("Child");
}	
else if(age<20){
	printf("Teen");
}
else if(age<60){
printf("Adult");
}
else{
	printf("Senior");
}
*/


//Ternary operator programs
//minimum of two no
/*
int a,b;
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
int min= a<b?a:b;
printf("Minimum no.%d",min);
*/

//even and odd
/*
int a;
printf("Enter a=");
scanf("%d",&a);
 a%2==0?printf("Even"):printf("Odd");
*/

//absolute value
/*
int a;
printf("Enter a=");
scanf("%d",&a);
int absolute=a>0?a:-a;
	printf("Absolute value=%d",absolute);
*/

//Days in switch
/*
int day;
printf("Enter day=");
scanf("%d",&day);
switch(day)
{
case 1:printf("Monday");
break;
case 2:printf("Tuesday");
break;
case 3:printf("Wednesday");
break;
case 4:printf("Thursday");
break;
case 5:printf("Friday");
break;
case 6:printf("Saturday");
break;
case 7:printf("Sunday");
break;
default:printf("Enter betn 1-7");
break;
	
}	
*/	
	
//switch calculator

int a,b;
int operation;
printf("Enter a=\n");
scanf("%d",&a);
printf("Enter b=\n");
scanf("%d",&b);
printf("Enter operator=\n");
scanf("%i",&operation);	

switch(operation){
	case 1:printf("Addition=%d",a+b);
	break;
	case 2:printf("subtraction=%d",(a-b));
	break;
	case 3:printf("Multiplication=%d",(a*b));
	break;
	case 4:printf("Division=%d",(a/b));
	break;
	default:printf("Enter betn +,-,*,/");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
