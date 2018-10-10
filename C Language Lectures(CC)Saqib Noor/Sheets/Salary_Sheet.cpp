#include<stdio.h>
#include<conio.h>
main(){
	
	// float stores a decimal Number ;
	
	
	float Basic , Medical ,Fuel , H_Rent , Gross , I_Tax , Net_Sal;
	
	
	printf("\n Enter Basic Salary : ");
	scanf("%f" , &Basic);
	 

	if(Basic >= 50000){
	
		Medical = Basic * 25 / 100;
	Fuel = Basic * 20 / 100;
	H_Rent = Basic * 15 /100;
	
	
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
		
		
	}
	
	
	else if (Basic > 30000){
	    
		Medical = Basic * 15 / 100;
	Fuel = Basic * 10 / 100;
	H_Rent = Basic * 15 /100;
	
	
	Gross = Basic + Medical + Fuel + H_Rent;
	I_Tax = Gross * 2 / 100;
	Net_Sal = Gross - I_Tax;
	
	printf("\n\n\t\t\t -------- Payroll Sheet ----------- \n\n");
	printf("\n Basic Salary : %.2f " , Basic);
	printf("\n Medical Allow: %.1f 15%% of Basic " , Medical);
	printf("\n Fuel Allowanc: %.0f " , Fuel );	
	printf("\n House Rent   : %.f " ,H_Rent);
	printf("\n Gross Salary : %.2f " , Gross);
	printf("\n Income Tax   : %f " , I_Tax);
	printf("\n Net Salary   : %f " , Net_Sal );
		
		
	}
	
	
	else {
		
		printf("\n\n\t\t\t -------- Payroll Sheet ----------- \n\n");
	printf("\n  Salary : %.2f " , Basic);
		
		
	}
	
	
	
	
	
	getch();
}
