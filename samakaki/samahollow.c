#include <stdio.h>
int main(void){
	int i, j, rows, space;
	
	
	if(scanf("%i", &rows) !=1) return 0;
	
	
	for(i = 1; i <= rows; i++){ //rows printing
	
	
	for(space = rows; space >= i; space--){
		printf(" ");
	}
	for(j = 1; j <= 2*i - 1; j++){
		if(j == 1 || j == 2*i - 1  || i == rows){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
	} //rows printing	
}