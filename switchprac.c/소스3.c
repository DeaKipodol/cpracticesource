//분명히 해당조건일때만 사용하는 경우가 많은것같은데 굳이 왜 아래 다른 조건의 명령문이 실행되게 만들었을까.
//이런기능도 필요하기 때문이다.의외로 switch문은 break의 사용없이 사용이 많이 된다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int Result;
	scanf("%d", &Result);

	switch (Result)
	{
	case 100: printf("매우잘했네\n"); break;
	case 90:  
	case 80: printf("조금만더힘내자\n"); break;
	case 70: 
	case 60:  
	case 50: printf("적당히는 했네"); break;
	case 40:  
	case 30:  
	case 20: 
	case 10: 
	case 0: printf("노력요함\n"); break;
	default: printf("D");//어차피 나가는 곳이니 break안함.

	}
}