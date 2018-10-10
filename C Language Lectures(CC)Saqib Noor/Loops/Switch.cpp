#include<stdio.h>
#include<conio.h>
main(){
	
// switch : It uses when exact value given;
// Switch is an alternate of if and else;

int a ,b ,c ;
char op;

// char stores a character .


printf("\n Enter operator \n 1 for add \n 2 for Sub \n 3 for Mul \n 4 for div \n Enter Your Choice :");
scanf("%c" , &op);

switch(op){
	
	case 'add' :

printf("\n Enter 1st Number : " );
scanf("%d" , &a);

printf("\n Enter 2nd Number : " );
scanf("%d" , &b);

	c = a + b;
	printf("\n %d + %d = %d " ,a ,b,c);
	break;
	
	case '-' : 

printf("\n Enter 1st Number : " );
scanf("%d" , &a);

printf("\n Enter 2nd Number : " );
scanf("%d" , &b);

	c = a - b;
	printf("\n %d - %d = %d " , a , b, c);
	break;
	
	case '*' :

printf("\n Enter 1st Number : " );
scanf("%d" , &a);

printf("\n Enter 2nd Number : " );
scanf("%d" , &b);

	c = a * b;
	printf("\n %d * %d = %d " , a, b, c);
	break;
	
	case '/' :

printf("\n Enter 1st Number : " );
scanf("%d" , &a);

printf("\n Enter 2nd Number : " );
scanf("%d" , &b);

	c = a / b;
	printf("\n %d / %d = %d " , a ,b ,c);
	
	default :
	printf("\n Please type 1 , 2 , 3 , 4");
}


	
	
	
	
	getch();
}
