#include<stdio.h>
//비트이동연산자는 >>와<<의 동작은 동일하나 우측시프트의 경우 부호에따라 달라진다
//>>은 새 비트가 채워질때 부호비트로 채워진다 부호가 없는 형인경우 0으로 채워진다
//이것은  좌측으로가면 2배 우측으로가면 반으로 값이 나눠지는 비트연산의 특징과 부호를 유지하기위함이다
//이런이유로 부동소수점형에서는 비트연산을 할수 없다 비트연산은 오직 정수타입변수나 정수에만 적용된다. 
int _7main() {
	char a = 8;
	a = a >> 3;
	printf("%d\n", a);

	char b = -128;
	b = b >> 7;
	printf("%d\n", b);
	return 0;
}
int _8main() {
	unsigned char a = 8;
	a = a >> 3;
	printf("%d\n", a);
	
	unsigned char b = 128;
	b = b >> 7;
	printf("%d\n", b);
	return 0;
}