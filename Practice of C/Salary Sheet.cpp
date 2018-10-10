#include<stdio.h>
#include<conio.h>
main(){
	 float Basic_Salary, Medical_Allowance , Fuel_Allowance ,House_Rent,Income_Tax, Gross_Salary , Net_Salary;
	 
	printf("Enter Basic Salary :");
	scanf("%f", &Basic_Salary);
	
	
	if(Basic_Salary> 60000){
		
		Medical_Allowance= Basic_Salary*25/100;
		House_Rent= Basic_Salary * 10/100;
	    Gross_Salary= Basic_Salary+ Medical_Allowance + Fuel_Allowance + House_Rent;
		Income_Tax= Gross_Salary* 10 /100;
		Net_Salary= Gross_Salary - Income_Tax;
		
		
		printf("\n\n\t\t-------Payroll Sheet--------\n\n\t\t");
		printf("\n Basic Salary :%.2f", Basic_Salary);
		printf("\n Medical Allowance : %.2f",Medical_Allowance);
		printf("\n Fuel Allowance : %.2f", Fuel_Allowance);
		printf("\n House Rent : %.2f", House_Rent);
		printf("\n Income Tax : %.2f", Income_Tax);
		printf("\n Net Salary : %.2f", Net_Salary);
		

	}
	
    	
	
	
	
	
	
}
