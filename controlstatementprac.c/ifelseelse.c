//if문으로도 다양한 분기를 만들수 있다 이것은 제어문도 그자체가 명령문이기에 가능한 문법이다 
//if else문과 그것이 가능한 이유
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
		printf("you should study more");]--> 이것을 하나의 명령문으로 본것
		실제로
		else
		if (mathscore >= 80) {
		printf("well done");
	}
	else..... 이렇게 띄어쓰기를 전개해도 됨
	*/