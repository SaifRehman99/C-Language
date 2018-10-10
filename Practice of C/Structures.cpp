#include<stdio.h>
#include<conio.h>
main(){
	
	struct Emp  {
		int Id;
		char Name[20];
		float Height;
		int Age;
		
		
		
		
	};
	
	struct Emp Emp1 ={100,"HAHA",5.9, 20};
	struct Emp Emp2;
	printf("\n -------------------------------EMPLOYEE PERSONAL DATA-------------------------------- :");
	printf("\n Enter Employee Id = %d",Emp1.Id);
	printf("\n Enter Name= %s", Emp1.Name);
	printf("\n Enter Employee Height = %.2f",Emp1.Height);
	printf("\n Enter Employee Age = %d",Emp1.Age);	
	
	
	
	printf("\n\n -----------ENTER EMPLOYEE PERSONAL DATE-----------");
	printf("\n Enter Employee ID Number = ");
	scanf("%d",Emp2.Id);
	printf("\n Enter ");
	
	getch();
}
