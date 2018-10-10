#include<Stdio.h>
#include<conio.h>
main(){
	
	int Total_Rows;
		
		printf(" \n Enter No of Rows : ");
		scanf("%d", &Total_Rows);
	
	int Rows , Col_Space ,Col_Star;
	
	for(Rows=1 ; Rows<=Total_Rows;Rows++){
		for(Col_Space=Total_Rows-Rows;Col_Space>=1 ; Col_Space--){
			printf(" *");
		}
	for(Col_Star=1;Col_Star<=2*Rows-1;Col_Star++){
		printf(" ");
	}
printf("\n");
}

       for( Rows=Total_Rows-1;Rows>=1;Rows--){
       	
       	  for(Col_Space=1;Col_Space<=Total_Rows-Rows;Col_Space++){
		  printf(" *");
		  }
	   
	      for(Col_Star=1;Col_Star<=2*Rows-1;Col_Star++){
	      	printf(" ");
		  }
		  printf("\n");
	   }













	getch();
	}
