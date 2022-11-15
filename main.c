#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	char *pc;
	int *pi;
	double *pd;
	
	pc=(char *)10000;
	pi=(int *)10000;
	pd =(double *)10000;
	
	printf("증가 전 : pc = %d, pi = %d , pd =%d\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	
	printf("증가 후 : pc = %d, pi = %d , pd =%d\n",pc,pi,pd); 
	//pc는 1바이트만큼 증가, pi는 4바이트만큼 증가, pd는 8바이트만큼 증가  
	
	return 0;
	
}
