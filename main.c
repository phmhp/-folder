#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)       
{
	int n, r;			
	int result;   //변수선언
	 
	
	printf("n값과 r값을 입력하시오:"); 		//메시지 
	scanf("%i %i",&n,&r); 		//n값과 r값을 입력받음 
 
result=combination(n,r); // combination 계산 
printf("%d",combination(n,r));//결과 값 출력

return 0;

}


int combination(int n, int r)
{
	return (factorial(n) / factorial (n-r) / factorial (r));//factorial 함수로 수식 계산
}




int factorial(int x)
{
	int res =1;
	int i;
	for(i=1;i<=x;i++) 	//i는 1부터 n까지 1씩 증가
		{
		res=res*i;	 // res에 i를 곱함 
		}		
	return res;
}
		

