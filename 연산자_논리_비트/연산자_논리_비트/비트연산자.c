//비트연산자는 정수타입에만 적용가능하다 
//반전연산자로 예를 들어보자.
//반전 연산자는 모든 비트를 반전시킨다.
#include<stdio.h>

int ____main(){
	char a = 0;//char은 문자 타입이지만 char은 아스키 코드를 사용한것이기
			   //때문에 즉 1바이트정수타입이다. 그래서 비트연산이 가능
	printf("%d", ~a);//00000000의 반전은 1111111이다 이는 2의 보수법에 의해 -1이 된다
	printf("%d", a);//a의 값 자체를 바꾸지 않는다.
//논리 부정연산자는 00000000->00000001이고
//비트연산자는      00000000->11111111이다.

}