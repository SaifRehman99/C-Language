#include<stdio.h>
#include<conio.h>
main(){
	
	float Maths , Physics , Chemistry , Urdu , English , Islamiat , Obtained_Marks , Percentage ;

	
	printf("\n Maths Marks     :");
	scanf("%f" , &Maths);
	
	printf("\n Physics Marks   :");
	scanf("%f" , &Physics);
	
	printf("\n Chemistry Marks :");
	scanf("%f" , &Chemistry);
	
	printf("\n Urdu Marks      :");
	scanf("%f" , &Urdu);
	
	
	printf("\n English Marks   :");
	scanf("%f" , &English);
	
	printf("\n Islamiat Marks  :");
	scanf("%f" , &Islamiat);
	
	
	Obtained_Marks = Maths+Physics+Chemistry+Urdu+English+Islamiat ;
	Percentage = Obtained_Marks/6 ;
	
	
	printf("\t\t\t\t\t--------MARKSHEET--------\t\t");
    printf("\n Maths Marks     :%.3f" , Maths);
	printf("\n Physics Marks   :%.3f" ,Physics);
	printf("\n Chemistry Marks :%.3f" ,Chemistry);
	printf("\n Urdu Marks      :%.3f" ,Urdu);
	printf("\n English Marks   :%.3f" ,English);
	printf("\n Islamiat Marks  :%.3f" ,Islamiat);
	printf("\n Obtained Marks  :%.3f" ,Obtained_Marks);
    printf("\n Percentage      :%.3f" ,Percentage);
	
	
	if(Percentage>=80){
		   
		   printf("\n Grade : A+ ");
	}
    
	else if(Percentage>=60){
		 
		 printf("\n Grade : A");
	}
	
	else if(Percentage>=50){
		
		printf("\n Grade : B");
	}
	 
	else if (Percentage>=40){
		
		printf("\n Grade  : C");
		
	}
	
	else if(Percentage>=30){
     
      printf("\n Grade : D");	 
	}
	
	else{
		
		printf("\n Grade : Failed");
		
		
	}
	getch();
}
