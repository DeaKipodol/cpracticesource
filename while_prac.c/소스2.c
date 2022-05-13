#include<stdio.h>

int __main() {
	int i = 1;
	int sum = 0;
	while (1) {
		sum = sum + i;
		i++;
		if (i > 10)break;
	}
	printf("%d", sum);
}

//1+2+3+4+5+6+7+8+9+10=55가 나오게 출력

int main(){
	int i = 1;
	int sum = 0;
	while (1) {
		sum = sum + i;
		if (i < 10)
			printf(" %d + ", i);
		else printf("%d = ",i);
		i++;
		if (i > 10)break;
	}
	printf("%d", sum);
}