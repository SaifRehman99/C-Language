#include<stdio.h>
#include<conio.h>
int Marksheet(int Eng , int Isl , int Math);
main(){
	
//	 Marksheet(70,80,90);
	
	int a ,b ,c;
	
	printf("\n\n Enter English Marks : ");
	scanf("%d" , &a);
	
	
	printf("\n Enter Islamiat Marks : ");
	scanf("%d" , &b);
	
	
	printf("\n Enter Maths Marks : ");
	scanf("%d" , &c);
	
	
	Marksheet(a ,b ,c);
}
int Marksheet(int Eng ,int Isl ,int Math){
	
	int Obt , Per;
	
	Obt = Eng + Isl + Math;
	Per = Obt / 3;
	
	printf("\n English Marks  : %d " , Eng );
	printf("\n Islamiat Marks : %d " , Isl);
	printf("\n Maths Marks    : %d " , Math);
	printf("\n Marks Obtained : %d " , Obt);
	printf("\n Percentage     : %d%% " , Per);
	
	
}
