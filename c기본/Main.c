#define _CRT_SECURE_NO_WARNINGS //권고 되지 않는 함수(SCANF)를 사용할테니 그거에 대해 뭐라하지 마라 
#include<stdio.h>// 컴파일러가 참조하는 사전. 모르는 문자열이 있을때 그게 문자열인지 아니면 키워드인지(의미가 있는것인지)판별할때 
                 //참조하는곳을 지정해준다 헤더파일의 내용이 프로그램앞부분에 삽입된다.
/*#:전처리기(preprocessor)는 프로그램을 컴파일할 때 컴파일 직전에 실행되는 별도의 프로그램이다. 
전처리기가 실행되면 각 코드 파일에서 지시자(directives)를 찾는다. 
지시자(directives)는 #으로 시작해서 줄 바꿈으로 끝나는 코드*///c명령문이 (c구문)아니다.그래서 ; 을 붙이지 않는다.
// c는 컴파일러와 별도로 소스코드 치환을 하는 전처리루틴(프리프로세서)를 지원한다.


int sum(int a, int b) {
	int c = a + b+3;
	return c;
}
/*번역기(컴파일러, 인터프리터)가 알아들을 수 있는 초소의 의미단위를 토큰(token)이라고 한다
토큰은 다음과 같은 범주로 되어있다.
키워드(int),식별자(sum),연산자(+,=),상수(3),문자('3'), 문자열,문장부호(;)이런 토큰을 조합하는게 프로그래밍이다 
*/
int main()//작업 순서를 나타내는 entry function.
		  // entry point(시작지점)을 알려주어 컴퓨터에게 작업을 명령한다.
		  //컴퓨터는 프로그램 속 여러 부 명령들을 어떤 순서로 실행하는지 모르기에 작업 순서를 모르면 실행조차 안한다 그래서 
	//작업순서를 알려주는 entry함수가 필요하며 그걸 전통적으로 main이라한다.
	//-프로그램 실행(더블클릭...) == main함수 호출,프로그램 종료==main함수 retrun 
{
	printf("Welcome to Cprogramming in %d !\r\n",2022);//printf 는 함수였다..! 첫번째 인자는 서식문자열이고 이후 구분자 , 뒤의 인자들은 형식지정자와 순서대로 대체된다.
	                                                   /* int printf(_In_z_ _Printf_format_string_ char const* const _Format,...)*/
	int Result = sum(1, 2);
	int age;
	char name[32] ={0};
	printf("이름을 입력하세요");
	scanf("%s",name);//배열의 이름 자체가 주소이기에 &안붙여도됨
	
	printf("나이를 입력하세요");
	scanf("%d", &age);
	printf("당신의 이름은%s이고 당신의 나이는 %d입니다 ", name, age);
	return 0;
	
}//이런 주석은 공백문자로 컴파일러가 처리한다.
//c언어로 되어있는 파일을 저장할때 확장자(.c)를 잘 적어주어야한다. 컴파일러가 컴파일 할때 확장자에따라 컴파일을 다르게 하기 때문이다.
//이는 다른 언어로 프로그램을 작성했을 때도 동일하다.