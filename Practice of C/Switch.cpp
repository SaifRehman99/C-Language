#include<stdio.h>
#include<conio.h>
main(){
	 int a,b,c;
	 char op; 
        printf("\n Enter Your Operator \n Press + for Addition \n Press - for subtraction \n Press * for Multiplication \n Press / for Division \n Enter Your Desire Choice :");
		scanf("%c", &op);
		
		switch(op){
			
			case '+' :
			
			printf(" Enter Your 1st Number =");
			scanf("%d", &a); 
			
			printf(" Enter Your 2nd Number =");
			scanf("%d", &b);
			
			c=a +b;
			printf(" \n %d + %d= %d",a,b,c);
			break;
			
			case '-' :
				
			
			printf(" Enter Your 1st Number =");
			scanf("%d", &a); 
			
			printf(" Enter Your 2nd Number =");
			scanf("%d", &b);
			
			c=a-b;
			printf("\n %d - %d = %d",a,b,c);
		    break;
		    
		    
		
		    case '*' :
		    	
		    printf(" Enter Your 1st Number =");
			scanf("%d", &a); 
			
			printf(" Enter Your 2nd Number =");
			scanf("%d", &b);
			
			c=a*b;
			printf("%d * %d = %d",a,b,c);	
		    break;
		   
		   
		   
		    case '/' :
		    	
		    	
		    printf(" Enter Your 1st Number =");
			scanf("%d", &a); 
			
			printf(" Enter Your 2nd Number =");
			scanf("%d", &b);
			
			
			c = a/b;
			printf("%d / %d = %d",a,b,c);
			break;	
		
		
	       default:
		   printf("\n Please Enter The Correct Arithemectic Opertaions : + , - , * , /  \n THANKYOU! :)");	
		}
	 
	 
	 
	 
	 
	 
	 
	 
	 	getch();
}
