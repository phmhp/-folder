#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct  Book{
	int number;
	char title[10];
};


void main(int argc, char *argv[]) {
	int i;
	struct Book **bookshelf; //�������������� 
		
	bookshelf= (struct Book**)malloc(3*sizeof(struct Book*)); //2���������Ͷ� 1������������ ������ �ϳ��� ������ �ؼ� �޾ƾ���. Ÿ��ĳ������ �Ȱ��� 2��������. 
	//�����ͺ����� 3�� ���� ��. =>�����ͺ����� ������ 4����Ʈ. 
	for(i=0;i<3;i++)
		bookshelf[i]= (struct Book*)malloc(10*sizeof(struct Book)); //�����;ƴϰ� ��¥ ����ü�� ��.
		//i��° �����Ͱ� 10���� ����Ű�Բ�. //�̹� [i[�� �����ϱ� 1���������ͷ� Ÿ��ĳ����.
		
		bookshelf[1][3].number = 5;
		strcpy(bookshelf[1][3].title,"C++ Programming");
		
		(bookshelf[2]+4)->number = 3; //bookshelf[2]+4�� bookshelf[2][4]�� ����. 
		strcpy((bookshelf[2]+4)->title, "Communications Theory");
		
		printf("book (1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title); //�����Ͷ� .�� �ƴ϶� -> ���. 
		printf("book (2,4) : %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
		
		for (i=0;i<3;i++)
		free(bookshelf[i]); //2���� ����ü �޸� �ݳ� 
		free(bookshelf);
		//free�� malloc�̶� �ݴ������ �ϸ� ��.  
return; }
