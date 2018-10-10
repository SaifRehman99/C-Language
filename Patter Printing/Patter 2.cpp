#include<stdio.h>
#include<conio.h>
main(){
	
	int No_of_Rows;
	printf("\n Enter no of Rows You Wanna Print = ");
	scanf("%d",&No_of_Rows); 
	int Rows,Columns;
	for(Rows=1 ; Rows<=No_of_Rows ; Rows++){
	
	for(Columns=1 ; Columns<=No_of_Rows-Rows+1 ; Columns++){
		printf("*");
	}

printf("\n");

}	
}
