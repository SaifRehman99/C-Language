
#include<stdio.h>
main(){
	
	int no_of_rows,rows,col;
	
	printf("\n Enter no of Row = ");
	scanf("%d",&no_of_rows);
	 for(rows=1; rows<=no_of_rows ; rows++){
	 	for(col=1; col<=rows ; col++){
	 	int	remainder=col%2;
	 		printf("%d ",remainder);
		 }
	 printf("\n");
	 }
}
