#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum =0;
	int i,x;
	
	
	printf("input a number : ");
	scanf("%d",&x);
	
	for (i=0;i<=x;i++){ //���ǽ��� i<x�� �ϸ� ������ ���� ���������ʾƼ� ������. / i �ʱⰪ�� 0�����ϳ� 1�� �ϳ� ���� 
		sum+=i;	}

	printf("The result is %i. \n ",sum);
	return 0;
	
}


//for ���� Ȱ���ؼ� 1���� x���� sum�� ���ϴ� �ǵ�
//for ()//�ݺ�(�ʱ��;���ǽ�;������)
    	//���ϱ�;
	
//printf(""); //��� ���) 

