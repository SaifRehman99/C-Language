#include<stdio.h>
main(){
	
	int no_of_rows;
	printf("\n Enter no of Rows = ");
	scanf("%d",&no_of_rows);
	
	int rows,colspace,colstar ;
	
	for(rows=1;rows<=no_of_rows ; rows++){
		for(colspace=no_of_rows-rows; colspace>=1 ; colspace--){
			printf(" ");
		}
for(colspace=1 ; colspace<=rows ; colspace++){
	printf(" *");
}
printf("\n");
	}
}
