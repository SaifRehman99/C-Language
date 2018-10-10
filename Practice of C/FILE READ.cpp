#include<stdio.h>
#include<conio.h>
main(){
	
	FILE *P ;
	char Name[20] ;
	
	P =fopen("File.txt", "r");
	fgets(Name , 20 , P);
	puts(Name);
	
	
	getch();
}
