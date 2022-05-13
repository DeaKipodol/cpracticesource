#include <stdio.h>

int _main() {
	int sum = 0;
	for (int i = 1; i < 11; i++) {
		sum = i + sum;
		printf("%d ", i);
		if ((i < 10) == 1)  printf("+");//i가 9 일때 제어식 계산(i++) 후 조건식 검사,10<11 ->참 이므로 명령어 실행	
 		else  printf("=");              //sum=10+sum 이후 if조건문에 의해 거짓이므로 else에의해 = 출력
	}                                  //명령문을 실행했으므로 다시 처음으로 돌아가 제어식계산 i는 10->11 
	printf(" %d", sum);               //제어식계산후 조건식 평가 11<11 ->0(거짓)
	                                  //루프 나가서 sum결과값 출력

}