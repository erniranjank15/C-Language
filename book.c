#include<stdio.h>

void print_book(char title[], char author[], float *price){
	printf("\n %s is written by %s , and is sold for Rs. %2f", title, author, price);
}

void input_book(char titles[], char authors[], float *price){
	printf("Please enter book title: ");
	fgets(titles, 100, stdin);
	printf("Please enter book author: ");
	fgets(authors, 100, stdin);
	printf("Please enter book price: ");
	scanf("%f",price);
}




int main(){
	printf("Welcome to book store\n");
	int i,j;
	char titles[3][100];
	char authors[3][100];
	float price[3];
	
	for(i=0;i<3;i++){
		input_book(titles[i], authors[i], &price[i]);
	}
	
	printf("Detils of books\n");
	for(j=0;j<3;j++){
		print_book(titles[i], authors[i], &price[i]);
	}
	
	return 0;
}
