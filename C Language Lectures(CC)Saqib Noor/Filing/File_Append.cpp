#include<stdio.h>
main(){
	
	FILE *p;
	int a ,b ,c  ;
	
	p = fopen("FILE.doc" , "a"); // a for append
	
	printf("\n Enter 1st Number : ");
	scanf("%d" , &a);
	
	
	printf("\n Enter 2nd Number : ");
	scanf("%d" , &b);
	
	c =a + b;
	fprintf(p,"\n Simple Calculator");
	fprintf(p,"\n %d + %d = %d " , a ,b, c);
	

}
