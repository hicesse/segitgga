#include <stdio.h>

void menu()
{
	printf("== program untuk print bintang ==");
	printf("\n");
	printf("terbagi menjadi 4 bagian \n");
	printf("1. Pojok kiri atas \n");
	printf("2. Pojok kanan atas \n");
	printf("3. Pojok kiri bawah \n");
	printf("4. Pojok kanan bawah \n");
	printf("5. Exit \n");
	printf("\n");
	printf("pilih: ");
}

int main(){
    int i, j, rows, space;

    if(scanf("%d", &rows) != 1) return 0;

    // kiri atas
    for(i = 1; i <= rows; i++){
        for(j = rows; j >= i; j--){
            if(j == i || i == 1 || j == rows)
            printf("*");
            else printf(" ");
    }
    printf("\n");

    
}

    //kanan atas
//    if(scanf("%d", &rows) != 1) return 0;
    for(i = rows; i >= 1; i--){
    	for(space = i; space <= rows; space++){
    		printf(" ");
		}
    	for(j = i; j >= 1; j--){
    		if(i == rows || j == 1 || j == i)
			printf("*");
			else
			printf(" ");	    		    		    		
		}
    	printf("\n");
	}
	
	
    // kiri bawah
	for(i = 1; i <= rows; i++){	
		for(j = 1; j <= i; j++ ){
			if(i == rows || j == 1 || j == i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
    // kanan bawah
    for(i = rows; i >= 1; i--){
    	for(space = 1; space <= i; space++)
    	printf(" ");
    	
    	for(j = rows; j >= i; j--){
    		if(i == 1 || j == i || j == rows)
    		printf("*");
    		else
    		printf(" ");
		}
    	
    	printf("\n");
	}
    	
    
    

    return 0;
}

