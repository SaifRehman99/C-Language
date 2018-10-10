#include<stdio.h>
#include<conio.h>
main(){
      int No_Of_Rows; 
	  printf(" \n No of Rows You Want To Print : ");
	  scanf("%d",&No_Of_Rows);	
	  int Rows,Column;
      int No_Of_Col=No_Of_Rows;
	
	for(Rows=1;Rows<=No_Of_Rows;Rows++){
		for(Column=1;Column<=No_Of_Col;Column++){
			printf("*");
		}
	printf("\n");
	No_Of_Col--;
	}
	
	
	
	
	getch();
}
