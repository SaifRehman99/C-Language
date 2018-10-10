#include<stdio.h>
#include<conio.h>
main(){
	 float Basic_Salary, Medical_Allowance, Fuel_Allowance , House_Rent, Income_Tax,Gross_Salary , Net_Salary;
	  
	  printf("\nEnter Basic Salary : ");
	  scanf("%f",&Basic_Salary);
	  
	  printf("\n Enter Medical Allowance :");
	  scanf("%f", &Medical_Allowance);
	  
	  printf("\n Enter Fuel Allowance :");
	  scanf("%f",&Fuel_Allowance);
	  
	  printf("\n Enter House Rent :");
	  scanf("%f",&House_Rent);
	  
	  Gross_Salary=Basic_Salary + Medical_Allowance + Fuel_Allowance + House_Rent;
	  Income_Tax= Gross_Salary*2/100;
	  Net_Salary= Gross_Salary-Income_Tax;
	  
	  
	  
	  printf("\n\n\t\t-------Payroll Sheet-------\n\n\t\t");
	  printf("\n Basic Salary : %.2f" , Basic_Salary);
	  printf("\n Medical Allowance :%.2f", Medical_Allowance);
	  printf("\n Fuel Allowance :%.2f", Fuel_Allowance);
	  printf("\n House Rent : %.2f", House_Rent);
	  printf("\n Income Tax :%.2f",Income_Tax);
	  printf("\n Gross Salary:%.2f", Gross_Salary);
	  printf("\n Net Salary :%.2f",Net_Salary);
	  
	  
	  getch();	  
	
	
	
	
	
	}
