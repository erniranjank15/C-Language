#include<stdio.h>

struct Car{
	char name[30];
	char model[30];
	char color[30];
	int year;
	
};

typedef struct Car Car;

void print_car(Car *car){
	printf("this %s model was %s and color is %s and year %d", car->name, car->model ,car->color, car->year);
}






int main(){
	
	Car Rollsroyace = {.name="Rollsroyace", .mode="Asprin", .color="Red", .year=2030};
	
	printf("Welcome to my car collection\n");
	print_car(&Rollsroyace);
	
	
	return 0;
}
