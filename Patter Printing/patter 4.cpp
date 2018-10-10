#include<stdio.h>
#include<conio.h>
main(){
	int No_of_Rows;
	printf("\n Enter no of Rows You Wanna Print = ");
	scanf("%d",&No_of_Rows);
	
	int Rows,no_of_Columns,col1,col2;
	
	for(Rows=1 ; Rows<=No_of_Rows ; Rows++){
	
	for(col1=1 ; col1<=No_of_Rows-1 ; col1++){
		printf("-");
	}
no_of_Columns--;
for(col2=1;col2<=Rows ; col2++){
printf("*");
}
printf("\n");

}
	
}
