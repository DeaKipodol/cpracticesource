#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int month;
	int year;
	for (;;) {
		printf("출생 월을 입력하세요\n");
		printf("연도:\n");
		scanf("%d", &year);
		if (year > 2022) { 
			printf("2022년도 미만의 연도만 입력하세요\n");
			continue;
		
		}
		printf("월:\n");
		scanf("%d", &month);
		if ((month > 12)|| (month<1)) {
			printf("제대로 입력하세요!!");
			continue;
		}
		printf("year=%d,month=%d", year, month);
		break;
	}
}