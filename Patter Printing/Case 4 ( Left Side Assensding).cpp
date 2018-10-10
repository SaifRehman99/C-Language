#include<stdio.h>
#include<conio.h>
main(){

      int Rows,Col1,Col2 ,No_Of_Rows,No_Of_Col;	
	 	printf(" \n Enter No Of Rows You Wanna Print :");
    	scanf("%d",&No_Of_Rows);

      No_Of_Rows;
	  No_Of_Col= No_Of_Rows - 1 ;
	
	
	for(Rows=1 ; Rows<=No_Of_Rows; Rows++){
		for(Col1=1 ; Col1<=No_Of_Col ; Col1++){
			printf("-");
				}
				No_Of_Col--; 
		for(Col2 =1 ; Col2<=Rows ; Col2++){
			printf("*");
		}
		printf("\n");
		}
	getch();
}
