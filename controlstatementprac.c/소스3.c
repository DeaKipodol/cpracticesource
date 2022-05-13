/*if문은 조건문 다음에 위치하는 명령문1줄만 실행하고 여러 복합문을 실행시키려면 블록으로 묶어야 된다는 것을 배웠다
* 그런데 단일문만 쓰는 경우에도 블록으로 감싸주는게 좋다.
* 블록을 안했을때 문제가 발생하는경우가 있기때문이다 이 소스는 그 예시이다

매크로를 명령문으로썼을 경우

*/
#include<stdio.h>

#define PRINTF(a,b) printf("%d\n",a);printf("%d,\n",b);
int ____main(void) 
{
	if (0)
		PRINTF(1, 2);
}
//이함수는 다음과 같다
int _1main(void)
{
	if (0)
		printf("%d\n", 1);
	    printf("%d\n", 2);//이놈만 실행됨
}