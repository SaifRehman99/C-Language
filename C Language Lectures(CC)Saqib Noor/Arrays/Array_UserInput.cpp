#include<stdio.h>
main(){
	
	int Array[5];
	
		
	for(int i = 0; i < 5; i++){
		
		printf("\n Enter Arrays Value on index number : %d =  " , i);
		scanf("%d" , &Array[i]);		
	}
	
     printf("\n %d",Array[5]);
}
