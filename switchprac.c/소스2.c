//���ǽ��� ��Ÿ���� �������� ���ߺбⰡ switch�� �ٽ��̴�.
//�׷��� �̷��� �帧�� �ٲ۴ٸ� ���ǿ� ������ �� �ش������� ��Ȳ�� �����ϰ� �ʹٸ� ��� �ؾ��ұ�. �̶� break�� ����Ѵ�
//break�� ��Ƣġ���� ������ ������ ��帧�̶� break�������� �������Ѵ�.

#include<stdio.h>

int __main() {
	switch (3)
	{         
	case 1: printf("1\n"); break;
	case 2: printf("2\n"); break;
	case 3: printf("3\n"); break;
	case 4: printf("4\n"); break;
	case 5: printf("5\n"); break;
	case 6: printf("6\n"); break;
	default: printf("D");//������ ������ ���̴� break����.

	}
}