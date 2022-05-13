#include<stdio.h>

void __main()
{
	if (0)
		printf("A\n");
		printf("b\n");//들여쓰기를 하면 안됨 햇갈리게 하려고 함

	printf("c\n");
}
//올바른 문장
void ___main()
{
	if (0)
	{
		printf("0-A\n");
		printf("0-B\n");
	}
	if (1) {
		printf("1-A\n");
		printf("1-B\n");
	}
}