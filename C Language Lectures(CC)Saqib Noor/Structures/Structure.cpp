#include<stdio.h>
main(){
	// structure : It Stores value but in different datatypes;

	struct Emp {
		
		int Id ;
		char Name[20];
		double Height;
		int Age;
		
	};
		

	struct Emp Emp1 = {101,"Mujahid" , 5.6 , 28 };


struct Emp Emp2;
	printf("\n Employee Data \n Employee 1");
	printf("\n Employee Id is   = %d " , Emp1.Id);
	printf("\n Employee Name is = %s " , Emp1.Name);
	printf("\n Employee Height is = %lf"  ,Emp1.Height);
	printf("\n Employee Age is = %d"  ,Emp1.Age);
	
	printf("\n Employee 2");
	printf("\n Employee Id is = ");
	scanf("%d" , &Emp2.Id);

	printf("\n Employee Name is = ");
	scanf("%s" , &Emp2.Name);
	
	printf("\n Employee Height is = ");
	scanf("%f" , &Emp2.Height);	
	
		printf("\n Employee Age is = ");
	scanf("%d" , &Emp2.Age);	

	printf("\n Employee Id is = %d " , Emp2.Id);
	printf("\n Employee Name is = %s " , Emp2.Name);
	printf("\n Employee Height is = %f " , Emp2.Height);
	printf("\n Employee Age is = %d " , Emp2.Age);

}	
