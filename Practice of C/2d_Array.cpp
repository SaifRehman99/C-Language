#include<stdio.h>
#include<conio.h>
main(){
	
	int Matrix1[3][3] , Matrix2[3][3] , Matrix[3][3] ;
	
	
	for( int r=0 ; r<3 ; r++){
		
		for(int c=0 ; c<3 ; c++){
			
			printf(" \n Enter Row : %d & Column : %d =", r , c);
			scanf(" \n %d", Matrix1[r][c]);
			
		}
	}
		printf(" \n Enter 1st Matrix : ");
		for(int r=0 ; r<3 ; r++){
			for(int c=0 ; c<3  ; c++){
				
				printf("\n %d",Matrix1[r][c]);
				
			}
		}
	
	printf("\n Enter 2nd Matrix :");
	for(int r=0 ; r<3 ; r++){
		for(int c=0 ; c<3 ; c++){
			
			printf("\n %d", Matrix2[r][c]);
		}
	}
	
	printf("\n\n SUM OF BOTH ARRAY :");
	for(int r=0 ; r<3 ; r++){
		for(int c=0 ; c<3 ; c++){
		
		
		Matrix[r][c]= Matrix1[r][c] + Matrix2[r][c];
		
		
		printf("\n %d", Matrix);
     }
	}
	
	
	
	getch();
}
