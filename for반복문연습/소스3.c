#include<stdio.h>
//�ʱ�� ���ǽ� ����� ��� ����/ ���ǹ��� �����̰����ϴ� �ٸ�, �� ���� �׻� ���� �ȴ�.
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