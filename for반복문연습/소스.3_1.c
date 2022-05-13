#include<stdio.h>

int main(void) {
	int i = 0;
	int sum = 0;

	for (;;) {
		sum = sum + i;
		if (i < 10)
			printf("%d +", i);
		else
			printf("%d =", i);
		i++;
		if (i > 10) break;
	}
	printf("%d", sum);

}