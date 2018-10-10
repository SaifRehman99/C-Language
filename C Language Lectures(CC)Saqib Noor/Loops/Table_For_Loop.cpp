#include<stdio.h>
main(){
	
	int Table  ,Start , End;
	
	printf("\n Enter Table Number : ");
	scanf("%d" , &Table);
	
	
	printf("\n Enter Starting Point : ");
	scanf("%d" , &Start);
	
	
	printf("\n Enter Ending Point : ");
	scanf("%d" , &End);
	
	
	
	for(int i = Start; i <= End ; i++){
		
		printf("\n %d * %d = %d " , Table , i , Table * i);
	}
	
	
}
