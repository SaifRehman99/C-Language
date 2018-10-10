#include<stdio.h>
#include<conio.h> // header uses for pausing screen 
main(){

	int Agey , Agem, Agew , Aged , Ageh , Agemin , Ages;

	Agey = 2;
	Agem = Agey * 12;
	Agew = Agem * 4;
	Aged = Agew * 7 ;
	Ageh = Aged * 24;
	Agemin = Ageh * 60;
	Ages = Agemin * 60;

 
 printf("\n\n\t\t ---------- Age Calculator ---------- \n\n");
 printf("\n Age in Years  : %d " , Agey);
 printf("\n Age in Months : %d " ,Agem);	
 printf("\n Age in Weeks  : %d " , Agew);
 printf("\n Age in days   : %d " , Aged);
 printf("\n Age in Hours  : %d " , Ageh);
 printf("\n Age in Mins   : %d " , Agemin);
 printf("\n Age in Second : %d " , Ages);	
	
	getch(); // Function uses for pausing screen
}
