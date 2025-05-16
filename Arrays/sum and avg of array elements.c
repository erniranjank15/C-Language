#include<stdio.h>
int main(){
	int arr[10],i;
	printf("Enter elements:\n");
	for(i=0;i<10;i++){
		printf("Enter %d th element:",i);
		scanf("%d",&arr[i]);
	}
	
	
	int sum=0;
	for(i=0;i<10;i++){
		sum+=arr[i];
	}
	float avg=sum/10;
	
	printf("Sum=%d\n",sum);
	printf("Avg=%2f",avg);
		return 0;
}
