#include<stdio.h>
#include<string.h>
main(){
	
	char FName[20] = "Zaid ";
	char LName[20] = "Ansari";
	
	// strcat uses for join two strings.
	
	strcat(FName,LName);	
	
	puts(FName);
	
	// strrev uses for reverse the name
	
	strrev(LName);
	puts(LName);
	
	// strlwr uses for convert text upper into lower case
	
	strlwr(FName);
	puts(FName);
	
	// strupr uses for change text lower into upper case.
	
	strupr(FName);
	printf("\n Name is %s " , FName);
	
	
	// strlen uses for length of characters.
	
	int l = strlen(FName);
	
	printf("\n Length of Character is : %d " , l);
		
}
