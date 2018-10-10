#include<stdio.h>
#include<conio.h>
main(){
	int  AgeY,AgeM,AgeW,AgeD,AgeH,AgeMIN,AgeS;
	
	AgeY=18;
    AgeM=AgeY*12;
    AgeW=AgeM*4;
	AgeD=AgeW * 7;
	AgeH=AgeD *60;
	AgeMIN=AgeH * 60;
	AgeS=AgeMIN *60;
	
	
	
	
	printf("\n\n\t\t---------Age Calculator--------");
	printf("\n Age in year=%d",AgeY);
	printf("\n Age in Month=%d",AgeM);
	printf("\n Age in Weeks=%d",AgeW);
	printf("\n Age in Days=%d",AgeD);
    printf("\n Age in Hours=%d",AgeH);
    printf("\n Age in Mints=%d",AgeMIN);
    printf("\n Age in Seconds=%d",AgeS);
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 getch();
	;}
