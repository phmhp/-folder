#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)       
{
	int n, r;			
	int result;   //��������
	 
	
	printf("n���� r���� �Է��Ͻÿ�:"); 		//�޽��� 
	scanf("%i %i",&n,&r); 		//n���� r���� �Է¹��� 
 
result=combination(n,r); // combination ��� 
printf("%d",combination(n,r));//��� �� ���

return 0;

}


int combination(int n, int r)
{
	return (factorial(n) / factorial (n-r) / factorial (r));//factorial �Լ��� ���� ���
}




int factorial(int x)
{
	int res =1;
	int i;
	for(i=1;i<=x;i++) 	//i�� 1���� n���� 1�� ����
		{
		res=res*i;	 // res�� i�� ���� 
		}		
	return res;
}
		

