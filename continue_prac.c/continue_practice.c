#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int month;
	int year;
	for (;;) {
		printf("��� ���� �Է��ϼ���\n");
		printf("����:\n");
		scanf("%d", &year);
		if (year > 2022) { 
			printf("2022�⵵ �̸��� ������ �Է��ϼ���\n");
			continue;
		
		}
		printf("��:\n");
		scanf("%d", &month);
		if ((month > 12)|| (month<1)) {
			printf("����� �Է��ϼ���!!");
			continue;
		}
		printf("year=%d,month=%d", year, month);
		break;
	}
}