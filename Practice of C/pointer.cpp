#include<stdio.h>
#include<conio.h>
main(){
	
	char *A , a;
	
	a= 'L';
	A= &a;
	
	printf(" \n Value of A = %c",a);
	printf(" \n Value of P = %u ", A);


    *A= 'c';
	
	
	printf(" \n Value of A = %c" ,a ); 	
	printf(" \n Value of P = %u" ,A );
	

	getch();
}
