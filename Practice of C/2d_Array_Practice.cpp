#include<stdio.h>
#include<conio.h>
main(){
	
	int Matrix1[2][3] , Matrix2[3][2] , Matrix[3][3];
	
	
	for(int r=0 ; r < 2 ; r++){
		
		for(int c=0 ; c<3 ; c++){
			
		printf("\n Enter R=%d: ",r);
		scanf("%d",Matrix1[r][c]);	
		}
		
		
	}
	
	printf("\n Enter 1st Matrix \n ");
	for(int r=0 ; r<2 ; r++){
		for(int c=0 ; c<3 ; c++){
			
			printf("\t \t %d",Matrix1[r][c]);
		}
	printf("\n \n");
	}
	
	
	printf("\n Enter 2nd Matrix \n");
	for(int r=0 ; r<2 ; r++){
		for(int c=0 ; c<3 ; c++){
			
			printf("\t %d",Matrix2[r][c]);
		}
	printf("\n\n");
	}
	
	
	printf("\n Sum Of Both Array");
	
	for(int r=0 ; r<2 ; r++){
		for(int c=0 ; c<3 ; c++){
			
			Matrix[r][c]=Matrix1[r][c] + Matrix2[r][c];
			
			printf("\n %d", Matrix);
		}
		
		
	}
	
	
	
	getch();
}
