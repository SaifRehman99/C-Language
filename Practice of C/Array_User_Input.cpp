#include<stdio.h>
#include<conio.h>
main(){
	
	int Array[5];
	
	for(int a=0 ; a<5 ; a++){
		
		printf("\n Enter Your Desired Index Value %d = ",a);
		scanf("%d", &Array[a]);
	}
	
	for( int a=0 ; a<5 ; a++){
		
		printf(" \n %d",Array[a]);
	}
	
	
	getch();
}
