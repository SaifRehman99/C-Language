#include<stdio.h>
#include<conio.h>
void FindPrimeFactor(int n){
	
	int i=2;
	
	while(n!=1){
		if(n%i==0){
			while(n%i==0){
				printf("%d ",i);
				n=n/i;
		
			}
	
             	
		}
		
		i++;
	}
	
}
main(){
      
	  int n;
	  
	  printf(" \n Enter a Number : ");
	  scanf("%d",&n);	
	  FindPrimeFactor(n);
	
	getch();
}
