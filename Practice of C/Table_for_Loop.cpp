#include<stdio.h>
#include<conio.h>
main(){
	 int Table,Starting_Point , Ending_Point ;
	 
	 printf("\t\t\t\t------------TABLE CHART---------------\t\t\t\t");
	 
	 printf("\n\n Enter Your Desired Table ==");
	 scanf("%d", &Table);
	 
	 printf("\n Enter Where You Want to Start Your Table ==");
	 scanf("%d",&Starting_Point);
	
	 printf("\n Enter Where You Want To End Your Table ==");
	 scanf("%d",&Ending_Point);
	
	
	for(int i=Starting_Point;i<=Ending_Point;++i){
       
	   
	   printf(" \n %d * %d = %d ",Table,i,Table*i);		
		
		
	}
	
	getch();
}
