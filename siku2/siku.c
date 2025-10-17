#include <stdio.h>
int main(void){
	int i, j, rows;
	
	if(scanf("%i", &rows) !=1) return 0;
	
	for(i = 0; i <= rows; i++){ //rows printing
	for(j = 1; j <= i; j++){
		printf("*");
	}
	printf("\n");
	} //rows printing
	
	return 0;
	//90 deg
}