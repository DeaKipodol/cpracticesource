#include<stdio.h>
int ___main() {
	int i = 1;//초기식
	int sum = 0;
	for (; i < 11;) {
		sum = sum + i;//명령문 시작
		//ㅁ/
		if (i < 10)printf("%d +",i);
		else printf("%d =",i);
		i++;//제어식                //제어식에 해당하는 것은 맨 마지막에 집어넣어야 한다. 안그러면 기존 for문과 달라진다
	}                               //예를들어 ㅁ에 해당하는 위치에 제어식을 두면 i==9,i==10 인 경우에 else 문이 실행된다
	printf("%d\n", sum);            //i가 10 이고 sum을 계산한후 i를 ++가 되면  11역시 else에 걸린다. 제어식이 마지막에 있으면
	return 0;                        //조건문에의해 실행 되지 않았을 것이다.
}