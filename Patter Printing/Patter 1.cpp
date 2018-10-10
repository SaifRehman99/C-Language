#include<stdio.h>
#include<conio.h>
main(){
	
	int Rows,Columns;
	int No_of_Rows;
	
	printf("\n Enter no of Rows You Wanna Print = ");
	scanf("%d",&No_of_Rows);
	for(Rows=1 ; Rows<=No_of_Rows ; Rows++){
	
	for(Columns=1 ; Columns<=Rows ; Columns++){
		printf("*");
	}

printf("\n");

}
	
}
