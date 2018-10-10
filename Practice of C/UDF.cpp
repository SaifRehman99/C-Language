#include<stdio.h>
#include<conio.h>
int ADD();
int SUB();
main(){
	
	
	ADD();
	SUB();
	
	
	getch();
}

int ADD(){
	 int a , b , c;
	 
	 printf("\n Enter 1st Number :");
	 scanf("%d",&a);
     
	 
	 	 printf("\n Enter 2nd Number :");
	     scanf("%d",&b);   

             c = a + b ;
             
            printf("%d + %d = %d", a , b, c);
            
}

int SUB(){
 int a , b , c;
	 
	 printf("\n Enter 1st Number :");
	 scanf("%d",&a);
     
	 
	 	 printf("\n Enter 2nd Number :");
	     scanf("%d",&b);   

             c = a - b ;
             
            printf("%d - %d = %d", a , b, c);
	
}
