#include<stdio.h>
main(){
	
	// Pointer Contains address of an another variable;
	// * Means Value of 
	// & Means  Addrss of value
	// int stores 2 or 4 bytes .
	// float stores 2 or 4 bytes .
	// string stores  8 bytes .
	// char stores 1 bytes .
	

	char *P , a;
	
	a = 'S';
	P = &a;
	
	printf("\n Value of A is = %c " , a);
	printf("\n Value of P is = %u " , *P);
	
	*P= 'B';
	
	printf("\n Value of A is = %c" , a);
	printf("\n Value of P is = %u " , *P);
	printf("\n Address of A is = %u " , P);

P++;
	printf("\n Address of A is = %u " , P);

	
	
}
