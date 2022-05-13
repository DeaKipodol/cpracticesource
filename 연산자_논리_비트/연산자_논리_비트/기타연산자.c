#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int __9main() {
	//3항연산자
	int age;
	
		printf("press your age");
		scanf("%d", &age);
		printf("%s", (age < 20) ? "성인인증필요" : "성인인증완료");
	
}
//sizeof//함수같지만 연산자다 괄호 안에 들어가는 것이 피연산자이고 피연산자가 차지하는 메모리의 크기를 나타낸다.
int __10main() {
	char c;
	int a;
	double d;
	int arr[5];
	//피연산자는 타입이름이거나
	int s1 = sizeof(char);
	int s2 = sizeof(int);
	int s3 = sizeof(double);
	//변수명
	int s4 = sizeof(c);
	int s5 = sizeof(a);
	int s6 = sizeof(d);
	//배열명이 될수 있다
	int s7 = sizeof(arr);
	printf("%d,%d,%d,%d,%d,%d,%d",s1,s2,s3,s4,s5,s6,s7);


}