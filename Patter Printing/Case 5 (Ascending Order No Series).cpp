#include<stdio.h>
#include<conio.h>
main(){

      int Rows, Column  , No_Of_Rows;
      printf(" \n Enter No of Rows You Want To Print : ");
      scanf("%d",&No_Of_Rows);
      
      for(Rows=1 ; Rows<=No_Of_Rows; Rows++){
      	for(Column=1 ; Column<=Rows ; Column++){
      		printf("%d ",Rows*Column);
		  }
	  
	  printf("\n");
	  }






getch();
}
