//if�����ε� �پ��� �б⸦ ����� �ִ� �̰��� ����� ����ü�� ��ɹ��̱⿡ ������ �����̴� 
//if else���� �װ��� ������ ����
#include<stdio.h>

int main(void) 
{
	int mathscore;
	printf("press your math score");
	scanf_s("%d",&mathscore);

	if (mathscore >= 90) {
		printf("good job");
	}
	else if (mathscore >= 80) {
		printf("well done");
	}
	else if (mathscore >= 70)
		printf("...well i think");
	else
		printf("you should study more");
}
/*
	if (mathscore >= 90) {
		printf("good job");
	}
	else[if (mathscore >= 80) {
		printf("well done");
	}
		 else
		printf("you should study more");]--> �̰��� �ϳ��� ��ɹ����� ����
		������
		else
		if (mathscore >= 80) {
		printf("well done");
	}
	else..... �̷��� ���⸦ �����ص� ��
	*/