#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int __9main() {
	//3�׿�����
	int age;
	
		printf("press your age");
		scanf("%d", &age);
		printf("%s", (age < 20) ? "���������ʿ�" : "���������Ϸ�");
	
}
//sizeof//�Լ������� �����ڴ� ��ȣ �ȿ� ���� ���� �ǿ������̰� �ǿ����ڰ� �����ϴ� �޸��� ũ�⸦ ��Ÿ����.
int __10main() {
	char c;
	int a;
	double d;
	int arr[5];
	//�ǿ����ڴ� Ÿ���̸��̰ų�
	int s1 = sizeof(char);
	int s2 = sizeof(int);
	int s3 = sizeof(double);
	//������
	int s4 = sizeof(c);
	int s5 = sizeof(a);
	int s6 = sizeof(d);
	//�迭���� �ɼ� �ִ�
	int s7 = sizeof(arr);
	printf("%d,%d,%d,%d,%d,%d,%d",s1,s2,s3,s4,s5,s6,s7);


}