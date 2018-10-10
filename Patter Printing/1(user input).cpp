#include<stdio.h>
#include<conio.h>
main(){
	 int rows,column,no_of_rows ;
	 
	 printf("\n Enter No of Rows You Wanna Print =");
	 scanf("%d",&no_of_rows);
	 
	 for(rows=1;rows<=no_of_rows;rows++){
	 
	 for(column=1;column<=rows ; column++){
	 if(column<=rows)
	 printf("*");
	 else
	 printf("");
   
}

printf("\n");
}


}
