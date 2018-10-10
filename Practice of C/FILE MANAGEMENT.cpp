#include<stdio.h>
main(){
	
	FILE *P ;
	int a=50 , b=80 ,c = a + b ;
	
	P=fopen("FILE.doc","a ");
	//fprintf(P," \n ============ SIMPLE CALCULATOR ==============");
	//fprintf(P," \n %d + %d = %d ", a , b , c);
    fprintf(P," \n  MUTIBA IS ULLU ");
    fprintf(P, " \n She is a nice Girl");
    fprintf(P, "\n She Supports me As Well");
    fprintf(P , "\n Ab Zyada LAmbi nh wo Ik Ullu hai <3");
}
