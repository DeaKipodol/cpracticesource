#include <stdio.h>
int _____main() {
	int a = 2;
	int b = 111;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d ,b=%d", a, b);
}
