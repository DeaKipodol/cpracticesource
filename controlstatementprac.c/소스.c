#include<stdio.h>

void _main() 
{
	int c1 = (1 == 1);//true
	int c2 = (1 != 1);//false
	int c3 = (2 > 1);//true
	int c4 = (2 < 1);//false
	int c5 = (2 >= 1);//true
	int c6 = (2 <= 1);//false
	int c7 = (2 <= 2);//true
	printf("%d %d %d %d %d %d %d\n", c1, c2, c3, c4, c5, c6,c7);//,�� �ǹ̸� �����ϴ� ������
	//���α׷��ֿ��� '�񱳿�����'�� ���� ���ǽ��� �������
	//0 Ȥ�� 1�� �ȴ�
}