//조건식이 나타나는 값에따른 다중분기가 switch의 핵심이다.
//그런데 이렇게 흐름만 바꾼다면 조건에 만족할 때 해당조건의 상황만 실행하고 싶다면 어떻게 해야할까. 이때 break를 사용한다
//break는 스튀치문을 강제로 나간다 어떤흐름이라도 break를만나면 나가야한다.

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
	default: printf("D");//어차피 나가는 곳이니 break안함.

	}
}