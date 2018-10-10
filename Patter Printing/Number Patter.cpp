#include<stdio.h>
main(){
	 int no_of_rows,rows,col;
	 
	 printf("\n Enter No of Rows wanna print  = ");
	 scanf("%d",&no_of_rows);
	 
	 for(rows=1 ; rows<=no_of_rows ; rows++){
	 	for(col=1;col<=rows ; col++){
	 		printf("%d ",rows*col);
		 }
	 
	 printf("\n");
	 
	 }
	 
	 
	
	
}
