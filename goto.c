#include<stdio.h>
int main(){
	int n;
	
	// goto in condition
	/*input_no:// label for goto
	printf("Enter value of n=\n");
	scanf("%d",&n);
	if(n!=10){
		goto input_no;
	}
	
	*/
	
	//goto without condition
	niranjan://label for goto
	printf("Enter value of n=\n");
	scanf("%d",&n);
	printf("Niranjan Kasote\n");
	goto niranjan;                //work as a loop but it may be goes to infiite
	return 0;
}
