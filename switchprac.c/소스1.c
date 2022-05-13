#include<stdio.h>

int _main() {
	switch (5)//케이스대로 숫자하나씩 적어보자 해당되는 조건의 명령문을 포함 그아래의 명령문이 실행이된다. 
	{         //스위치는 흐름을 바꾸는 제어문이라 생각하자.  
	case 1 : printf("1\n");
	case 2 : printf("2\n");
	case 3 : printf("3\n");
	case 4 : printf("4\n");
	case 5 : printf("5\n");
	case 6 : printf("6\n");
	default : printf("D");//조건에맞는게없다면 default의 명령어 실행 
	
	}
}