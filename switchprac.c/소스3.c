//�и��� �ش������϶��� ����ϴ� ��찡 �����Ͱ����� ���� �� �Ʒ� �ٸ� ������ ��ɹ��� ����ǰ� ���������.
//�̷���ɵ� �ʿ��ϱ� �����̴�.�ǿܷ� switch���� break�� ������ ����� ���� �ȴ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int Result;
	scanf("%d", &Result);

	switch (Result)
	{
	case 100: printf("�ſ����߳�\n"); break;
	case 90:  
	case 80: printf("���ݸ���������\n"); break;
	case 70: 
	case 60:  
	case 50: printf("�������� �߳�"); break;
	case 40:  
	case 30:  
	case 20: 
	case 10: 
	case 0: printf("��¿���\n"); break;
	default: printf("D");//������ ������ ���̴� break����.

	}
}