#include <stdio.h>
#include <stdlib.h>

static int all_files; //외부 파일에서 extern으로 접근 불가  

extern void sub();

int main(void)
{
	sub();
	printf("%d\n",all_files);
	return 0;
}
