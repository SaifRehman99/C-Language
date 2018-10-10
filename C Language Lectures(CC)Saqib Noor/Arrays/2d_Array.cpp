#include<stdio.h>
main(){
	
	int Matrix1[2][2] , Matrix2[2][2] ,Matrix[2][2];
	// Nested Loop
	
	for(int r = 0 ; r < 2 ; r++){ // outer Loop
		
		for(int c = 0 ; c < 2 ; c++){ // inner Loop
		
		printf("\n Enter R = %d & C = %d : " , r ,c );	
		scanf("%d" , &Matrix1[r][c]);
			
		}

	}
	
	printf("\n\n 1st Matrix \n\n");
	for(int r = 0 ; r < 2; r++){
		
		for(int c = 0 ; c < 2 ; c++){
			
			printf("\t\t %d " , Matrix1[r][c]);
		}
		
		printf("\n\n");	
	}
	
	
	for(int r = 0 ; r <2 ; r++){ // outer Loop
		
		for(int c = 0 ; c < 2 ; c++){ // inner Loop
		
		printf("\n Enter R = %d & C = %d : " , r ,c );	
		scanf("%d" , &Matrix2[r][c]);
			
		}

	}
	
	
	printf("\n\n 2nd Matrix \n\n");
	for(int r = 0 ; r < 2; r++){
		
		for(int c = 0 ; c < 2 ; c++){
			
			printf("\t\t %d " , Matrix2[r][c]);
		}
		
		printf("\n\n");	
	}
	
	printf("\n\n Sum of Both Arrays \n\n");
	
	
	for(int r = 0 ; r <2 ;r++){
		
		for(int c = 0 ; c < 2 ; c++){
			Matrix[r][c] = Matrix1[r][c] + Matrix2[r][c] ;
			
			printf("\t\t %d " , Matrix[r][c]);
			
			
		}
		
		printf("\n\n");
	}
	
}
