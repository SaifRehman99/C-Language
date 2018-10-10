#include<stdio.h>
main(){
	
	FILE *p;
	int a = 50,b =30 ,c = a + b;
	
	p = fopen("FILE.doc" , "w"); // w for write
	fprintf(p,"\n Simple Calculator");
	fprintf(p,"\n %d + %d = %d " , a ,b, c);
	

}
