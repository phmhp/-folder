#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59; //���� ���Ƿ� ����.
	int x; //�Է¹޴� ������ ������ ����
	int trial =0; 
	 
	
	do 
	{ 
	printf("Guess a number : ");	 //�Է��ض� ���� ���
	scanf("%i",&x);	 //�Է��� ����
		trial=trial+1;
	
	
		if (x> answer)
			{
			printf("high!\n");	 //�Է� ���ڰ� ���亸�� ū�� ������ ���
		}
		else if (x<answer)
		{
	
			printf("low!\n");
		} 
		else if (x=answer)
		{
			printf("Congratulation! ");
		}
	}	
	while(x!=answer);
	 //����� ������ ���� �Ǵ�
	 
	 
	 printf(" trials : %i\n", trial); //�õ� Ƚ�� ���
	 
	 return 0;  


}


