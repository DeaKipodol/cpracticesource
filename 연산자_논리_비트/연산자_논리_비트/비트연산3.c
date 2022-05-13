#include<stdio.h>
int ______main() {
	char a = 1;
	a = a << 3;//2^0->2^3
	printf("%d\n", a);

	char b = 1;
	b = b << 7;
	printf("%d\n", b);//00000001->10000000 이게 주의사항이다,

}