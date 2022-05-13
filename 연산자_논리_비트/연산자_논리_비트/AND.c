//and &&의  short-circuit

#include<stdio.h>
int ___main() 
{
	0 && printf("0 && \n");
	1 && printf("1 && \n");
	//0 이 피연산자일경우 계산할 필요없이 값이 0이기때문에 계산을 하지않는다 
	int a=(0 && printf("1 && \n"));
	printf("a=%d", a);//아마 이런게 이미 정의되 있는듯? 평가를 안하고도 값이 정해지는것보면
					  //-->우변의 값을 실행할 이유가없거든 어차피 이 연산식의 값이 결정되어있으니까.
	//Short-circuit evaluation//or 도마찬가지 아무값이나 0이아닌값이면 평가안함.우변의 값을 실행할필요조차 없기에
	printf("0 && \n") && 0;// 이건 실행 되잖아.

}