#include<stdio.h>
#include<conio.h>
int Add(); // function prototype
int Sub(); 
int Multiplication();
main(){
	
	int op = 3;
	
	if(op == 1){
	
	Add(); // function call
	} 
	
	else if (op==2){
	
	Sub();
	}
	 else if(op==3){
	 	
	 	Multiplication();
	 }
	else {
		printf("\n invalid Number");
	}
	
}

int Add(){ // 1. Function Defination.
	
	int a ,b ,c;

	printf("\n Enter 1st Number : ");
	scanf("%d" , &a);


	printf("\n Enter 2nd Number : ");
	scanf("%d" , &b);

	c = a+ b;
	
	
	printf("\n %d + %d = %d " , a , b, c);
	
}

int Sub(){
	
	int a , b, c;
	
	printf("\n Enter 1st Number : ");
	scanf("%d" , &a);
	
	
	printf("\n Enter 2nd Number : ");
	scanf("%d" , &b);
	
	c =a - b;
	
	printf("\n %d - %d = %d " , a ,b ,c);
}


int Multiplication(){
	
	
	int a , b, c ;

    printf("\n Enter 1st Number : ");
	scanf("%d" , &a);
	
	
	printf("\n Enter 2nd Number : ");
	scanf("%d" , &b);
	
	c =a * b;
	
	printf("\n %d * %d = %d " , a ,b ,c);

}
