//초기식과 제어식은 생략될수 있다. 다음은 생략후 적은 1부터 10까지 더하기를 한 코드이다.
#include<stdio.h>
int __main() {
	int i = 1;//초기식
	int sum = 0;
	for (; i < 11;) {
		sum = sum + i;//명령문 시작
		i++;//제어식
	}
	printf("%d\n", sum);
}