#include<stdio.h>
#include<conio.h>
main(){
      
	  int Rows , Column , No_Of_Rows ;
	  printf(" \n No of Rows You Want To Print : ");
	  scanf("%d",&No_Of_Rows);	
	
	for(Rows=1;Rows<=No_Of_Rows;Rows++){
		for(Column=1;Column<=No_Of_Rows; Column++){
			printf("*");
		}
	printf("\n");
	
	}
	
	
	
	
	getch();
}
