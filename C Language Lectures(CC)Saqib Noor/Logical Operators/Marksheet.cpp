#include<stdio.h>
#include<conio.h>
main(){
	
	float Eng , Isl , Math , Comp , Obt , Per ;
	
	
	printf("\n Enter English Marks : ");
	scanf("%f" , &Eng);
	
	if(Eng > 100 || Eng < 0){
		
		printf("\n Please type numbers between 0 to 100");
	}
else {

	printf("\n Enter Islamiat Marks : ");
	scanf("%f" , &Isl);
		if(Isl > 100 || Isl < 0){
		
		printf("\n Please type numbers between 0 to 100");
	}
else {
	printf("\n Enter Maths Marks : ");
	scanf("%f" , &Math);
	
	printf("\n Enter Computer Marks : ");
	scanf("%f" , &Comp);
	
	Obt = Eng + Isl + Math + Comp;
	Per = Obt / 4;
	//Per = Obt * 100 / 400;
	
	printf("\n\n\t\t\t --- Marksheet ---\n\n");
	printf("\n English Marks  : %.2f " , Eng);
	printf("\n Islamiat Marks : %.2f " , Isl);
	printf("\n Maths Marks    : %.2f " , Math);
	printf("\n Computer Marks : %.2f " , Comp);
	printf("\n Marks Obtained : %.2f " , Obt);
	printf("\n Percentage     : %.2f%% " , Per);
	
	if(Per >= 80 && Eng > 40 && Isl > 40 , Comp > 40 && Math > 40){
		
		printf("\n Grade : A+1");
		
	}
	
	else if (Per >= 70 && Eng > 40 && Isl > 40 , Comp > 40 && Math > 40){
		
		printf("\n Grade : A");
		
	}
	
	else if (Per >= 60 && Eng > 40 && Isl > 40 , Comp > 40 && Math > 40 ){
		
		printf("\n Grade : B ");
	}
	
	else if (Per >= 50 && Eng > 40 && Isl > 40 , Comp > 40 && Math > 40 ){
		
		printf("\n Grade : C");
		
	}
	else {
		
		printf("\n Grade : Failed");
	}
	
}

	}	
	getch();
}
