#include<stdio.h>
#include<string.h>
main(){
	char Name[20] = "Admin" , UName[20];
	int Password;
start:
	printf("\n \n \n Enter UserName : ");
	scanf("%s" , &UName);	
	
	
	if(strcmp(Name , UName) == 0){
		
	
		
		 printf("\n \n \n  Enter Your Password : ");
	   	scanf("%s" ,&Password);
		
		
		if(Password ==123)
		
				printf("\n Logined");
		       
		 else 
		
		printf("\n invalid Password ");
		
		}	
		
		
	else 
		
		printf("\n invalid User Name");
		goto start;
		
	
}
