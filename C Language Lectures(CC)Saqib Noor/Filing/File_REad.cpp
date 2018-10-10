#include<stdio.h>
main(){
	
	FILE *f;
	char Name[50];
	
	f = fopen("FILE.txt" , "r"); // r for read
	fgets(Name , 50 , f);
	puts(Name);
	
	
}
