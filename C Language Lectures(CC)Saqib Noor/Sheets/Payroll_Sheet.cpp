#include<stdio.h>
#include<conio.h>
main(){
	
	// float stores a decimal Number ;
	
	
	float Basic , Medical ,Fuel , H_Rent , Gross , I_Tax , Net_Sal;
	
	
	printf("\n Enter Basic Salary : ");
	scanf("%f" , &Basic);
	 
	 printf("\n Enter Medical Allowance : ");
	 scanf("%f" , & Medical);
	 
	 printf("\n Enter Fuel Allowance : ");
	 scanf("%f" , &Fuel);      
	       
	 printf("\n Enter House Rent : ");
	 scanf("%f" , &H_Rent);
	
	
	Gross = Basic + Medical + Fuel + H_Rent;
	I_Tax = Gross * 2 / 100;
	Net_Sal = Gross - I_Tax;
	
	 	printf("\n\n\t\t\t -------- Payroll Sheet ----------- \n\n");
	printf("\n Basic Salary : %.2f " , Basic);
	printf("\n Medical Allow: %.1f " , Medical);
	printf("\n Fuel Allowanc: %.0f " , Fuel );	
	printf("\n House Rent   : %.f " ,H_Rent);
	printf("\n Gross Salary : %.2f " , Gross);
	printf("\n Income Tax   : %f " , I_Tax);
	printf("\n Net Salary   : %f " , Net_Sal );
	
	getch();
}
