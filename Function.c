#include<stdio.h>
#include<time.h>
//hello world function
void helloworld(){
	printf("Hello World");
}



int sum(int x,int y,int z, int w){
	int sum=x+y+z+w;
	return sum;
}


int square(int n){
	return n*n;
}



float max(float a,float b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}



void increment(int a){
	printf("function before:%d\n",a);
	a++;
	printf("function after:%d\n",a);

}



int avg(int a,int b,int c,int d,int e){
	return a+b+c+d+e/5;
}



int fibonacci(int pos){
	if(pos<=1){
		return pos;
	}
	int current=fibonacci(pos-1)+fibonacci(pos-2);
	return current;
}



int reverse(int num,int rev){
	if(num==0){
		return rev;
	}
	int remainder=num%10;
	int new_num=num/10;
	int new_rev=rev*10+remainder;
	return reverse(new_num,new_rev);
}



int main(){
	//helloworld();
	
	
/*int add=sum(5,4,8,6);
printf("sum=%d",add);
*/


/*
int a=square(5);	
	printf("Square=%d",a);
*/

/*
char cur_time[128];

time_t t;
struct tm* ptm;
t=time(NULL);
ptm=localtime(&t);
strftime(cur_time,128,"%d-%b-%y %H:%M:%S",ptm);
printf("Current date and time:%s\n",cur_time);
*/


/*
float m=max(5.3,6.7);
printf("Max=%f",m);	
	return 0;
}
*/
/*



int num;
printf("enter no.=");
scanf("%d",&num);
printf("before increment is %d",num);
increment(num);
printf("after increment is %d",num);
*/



/*int a=avg(5,7,6,9,3);
printf("Avg=%d",a);
*/



//Recurssion

/*
int num,i;
printf("Enter num=");
scanf("%d",&num);

for(i=0;i<=num;i++){
	printf(" %d",fibonacci(i));
}

*/




int num;
printf("enter no.=");
scanf("%d",&num);
int rev=reverse(num,0);
if(num==rev){
	printf("%d is palindrome",num);
}
else{
	printf("%d is not palindrome",num);
}






































































































































































































































return 0;
}
