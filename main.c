#include <stdio.h>
#include <stdlib.h>

static int all_files; //�ܺ� ���Ͽ��� extern���� ���� �Ұ�  

extern void sub();

int main(void)
{
	sub();
	printf("%d\n",all_files);
	return 0;
}
