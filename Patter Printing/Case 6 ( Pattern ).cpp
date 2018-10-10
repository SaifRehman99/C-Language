#include<stdio.h>
#include<conio.h>
main(){
	
	int No_Of_Rows , Rows , Column;
	
	printf(" \n Enter No of Rows You Wanna Print : ");
	scanf("%d", &No_Of_Rows);
	
	for(Rows=1 ; Rows<=No_Of_Rows; Rows++){
		for(Column=1 ; Column<=Rows ; Column++){
			
			int Remainder = Column %2 ;
			 printf( "%d  ",Remainder);
	
		}
	printf("\n");
	
	}
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
