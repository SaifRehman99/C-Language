#include<stdio.h>
#include<conio.h>
main(){
	
	int No_Of_Rows;
	
	printf(" \n Enter No of Rows You Wanna Print : ");
	scanf("%d", &No_Of_Rows);
	int   Rows, Column_Space, Column_Star ;
	
	for(Rows=1 ; Rows<=No_Of_Rows ; Rows++){
		for(Column_Space=No_Of_Rows-Rows; Column_Space>=1; Column_Space--){
			printf(" ");
		}
	
	for(Column_Star=1;Column_Star<=Rows;Column_Star++){
		printf("* ");
		}
	printf("\n");
	}
	
	
	
	
	
	
	
	
	getch();

}
