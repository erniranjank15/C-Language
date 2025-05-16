#include<stdio.h>

int main(){
	
	//multiplication table
	/*
	int n,m,i;
	printf("Enter a no.=");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		m=n*i;
		printf("%d\n",m);
	}
*/




//sum of all digits in integer
/*
int n,sum=0,rem;
printf("Enter no.=");
scanf("%d",&n);
while(n!=0){
	rem=n%10;
	sum+=rem;
	n=n/10;
}
printf("sum=%d",sum);
*/



//factorial of no.
/*
int n,fact=1,i;
	printf("Enter a no.=");
	scanf("%d",&n);	
	for(i=n;i>=1;i--){
	fact=fact*i;
	}
	printf("fact=%d",fact);
*/	
	
//sum of all odd nos.
	/*int n,sum=0,i=1;
	printf("Enter a no.=");
	scanf("%d",&n);	
     while(i<=n){
     	sum+=i;
		 i+=2;
	}
	
	printf("sum=%d",sum);	
	*/
	
	
	

	//LCM of nos.
	/*	int a,b,i;
	printf("Enter a no. a=");
	scanf("%d",&a);
	printf("Enter a no. b=");
	scanf("%d",&b);
	int min=a<b?a:b;
	int max=a*b;
	for(i=min;i<=max;i++){
		if(i%a==0&&i%b==0)
    {
	printf("LCM of %d and %d is %d",a,b,i);
	break;
	}	
	}
	*/

	
	
	//GCD of nos.
	/*
		int a,b,i;
	printf("Enter a no. a=");
	scanf("%d",&a);
	printf("Enter a no. b=");
	scanf("%d",&b);
	int min=a<b?a:b;
	int max=a*b;
	for(i=min;i>=1;i--){
		if(a%i==0&&b%i==0)
    {
	printf("GCD of %d and %d is %d",a,b,i);
	break;
	}	
	}
*/



//Prime no. check
/*
int n,i;
printf("Enter a no.=");
scanf("%d",&n);
for(i=2;i<n;i++){
	if(n%i==0){
		printf("Not prime");
		return 0;
	}
}	
printf("Prime no.");	
	*/



	
	//Reverse the no.
/*
	int n,i;
printf("Enter a no.=");
scanf("%d",&n);
int rev=0;
int copy=n;
while(copy>0){
	rev=(rev*10)+(copy%10);
	copy/=10;
}
printf("Reverse no.=%d",rev);
	
*/




//Fibinocci series until given no.
/*
int n;

printf("Enter a no.=");
scanf("%d",&n);
printf(" 0");
if(n>0){
	printf(" 1");
}
int prev=0;
int next=1;
while(next<=n){
	int temp=prev+next;
	printf(" %d",temp);
	prev=next;
	next=temp;
}
*/





//Armstrong no.
/*
int n;
printf("Ener no.=");
scanf("%d",&n);
int sum=0;
int copy=n;

while(copy>0){
	int digit=copy%10;
	sum+=digit*digit*digit;
	copy/=10;
}	

if(sum==n){
	printf("No. is Aremstong");
	
}
else{
	printf("No. is not Armstong");
}
*/


//Palindrome no. check
/*
	int n,i;
printf("Enter a no.=");
scanf("%d",&n);
int rev=0;
int copy=n;
while(copy>0){
	rev=(rev*10)+(copy%10);
	copy/=10;
}
if(rev==n){
	printf("No.is Palindrome");
}
else{
	printf("No.is not Palindrome");
}
*/



//Patterns
/*
*
**
***
****
*****
*/

/*
int n,i,j,rows;
printf("Enter a no.=");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
		printf("\n");
	for(j=0;j<i;j++){
		printf("* ");
}

}
*/


/*
*****
****
***
**
*
*/
/*
int n,i,j,rows;
printf("Enter a no.=");
scanf("%d",&rows);
for(i=0;i<=rows;i++){
		printf("\n");
	for(j=0;j<rows-i;j++){
		printf("* ");
}

}
*/

/*
     *
    **
   ***
  ****
 *****
 */
 /*
 int n,i,j,k,rows;
printf("Enter a no.=");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
		printf("\n");
for(k=0;k<rows-i;k++){
	printf(" ");
}
for(j=0;j<i;j++){
		printf("*");
}

}  
*/



//Positive no. do while
/*
int n;

do{
	printf("Enter positive no.=");
	scanf("%d",&n);
}while(n<=0);
printf("You entered positive no.");
*/


//sum of input nos. by user
/*
int n,sum=0;

do{
	printf("Enter positive no.=");
	scanf("%d",&n);
	sum+=n;
}while(n!=0);
printf("Sum=%d",sum);

*/



//sum of positive nos.
/*
int n,sum=0;
do{
	printf("Enter positive no.=");
	scanf("%d",&n);
	if(n<0){
	
	continue;
}
 sum+=n;
}while(n!=0);
printf("Sum=%d",sum);
*/


//print even nos using continue
/*
int i,n;
printf("Enter a no.=");
scanf("%d",&n);
for(i=1;i<=n;i++){
	if(i%2==1){
		continue;
	}
	printf("%d ",i);
}
*/



//

//square using break infinite loop
int n;
printf("Enter n=");
while(1){
	printf("Enter a no.=");
	scanf("%d",&n);
	if(n==-1){
		break;
	}
	printf("Square of %d no. is %d\n",n,n*n);
}







































	return 0;
}
