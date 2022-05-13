#include<stdio.h>
//초기식 조건식 제어식 모두 생략/ 조건문도 생략이가능하다 다만, 그 값은 항상 참이 된다.
int ____main() {
	int i = 0;
	int sum = 0;

	for (;;) {
		sum = sum + i;
		i++;
		if (i > 10)break;
	}
	printf("%d", sum);
	return 0;
}