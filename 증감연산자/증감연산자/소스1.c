#include<stdio.h>
//증감연산자는 함수인자 혹은 댕;ㅂㅍ;연산자로 사용될경우 차이가 생긴다.
int _main() {
	int a;
	a = 1;
	printf("%d\n",a++);//후위형 인자로 넘기고 a를 증가시킴//printf의 함수 인자로 넘기는 상황
	a = 1;
	printf("%d\n",++a);//전위형 a를 먼저 증가시키고 인자로 넘김
}

int main() {
	int a, b;
	a = 1;
	b = ++a;
	printf("%d\n", b);//a를 증가시킨후에 b에 대입

	a = 1;
	b = a++;//a를 b에 대입한후에 a값 증가
	printf(" % d\n", b);
}