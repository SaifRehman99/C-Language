#include<stdio.h>
#include<conio.h>
int Add();
int Sub();
main(){
	
int choice;
	printf("\n 1 for Add \n 2 for sub \n Enter Your Choice :  ");
	scanf("%d" , &choice);

	switch(choice){
		
		case 1 :
			Add();
			break;
			case 2 :
				Sub();
		break;
				default :
					printf("\n Invalid Number");
		
		
	}

//	if(choice == 1 ){
//		
//		Add();
//	}
//	
//	else if (choice == 2){
//		Sub();
//	}
//	else {
//		printf("\n Invalid Number");
//	}
}


int Add(){
	
	int a ,b ,c;
	
    printf("\n Enter 1st Number : ");
    scanf("%d",&a);
    
    printf("\n Enter 2nd Number :");
    scanf("%d",&b);
	
	c= a+b;
	printf("\n %d+ %d = %d " ,a,b, c);
	}
	
	
int Sub(){
	
	int a ,b ,c;
	
	a = 50;
	b = 40 ;
	c = a - b;
	
	printf("\n C = %d " , c);
	}



