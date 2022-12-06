#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct  Book{
	int number;
	char title[10];
};


void main(int argc, char *argv[]) {
	int i;
	struct Book **bookshelf; //이중포인터형태 
		
	bookshelf= (struct Book**)malloc(3*sizeof(struct Book*)); //2차원포인터라서 1차원포인터의 변수를 하나의 단위로 해서 받아야함. 타입캐스팅은 똑같이 2차원으로. 
	//포인터변수가 3개 생긴 것. =>포인터변수는 무조건 4바이트. 
	for(i=0;i<3;i++)
		bookshelf[i]= (struct Book*)malloc(10*sizeof(struct Book)); //포인터아니고 진짜 구조체가 들어감.
		//i번째 포인터가 10개씩 가리키게끔. //이미 [i[가 있으니까 1차원포인터로 타입캐스팅.
		
		bookshelf[1][3].number = 5;
		strcpy(bookshelf[1][3].title,"C++ Programming");
		
		(bookshelf[2]+4)->number = 3; //bookshelf[2]+4랑 bookshelf[2][4]랑 같음. 
		strcpy((bookshelf[2]+4)->title, "Communications Theory");
		
		printf("book (1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title); //포인터라서 .이 아니라 -> 사용. 
		printf("book (2,4) : %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title);
		
		for (i=0;i<3;i++)
		free(bookshelf[i]); //2차원 구조체 메모리 반납 
		free(bookshelf);
		//free는 malloc이랑 반대순서로 하면 됨.  
return; }
