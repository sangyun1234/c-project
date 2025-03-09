/*
1강
#include <stdio.h>// 라이브러리 추가>>>printf같은 함수를 사용할수있게 해줌

int main(void)  // void는 매개변수>> 특정함수를 실행할때 그 함수가 처리할 값들을 받아옴 
{
	printf("hello world!");
	return 0;// 하나의 함수가 종료되었을때 반환값을 정해주는 지정된약속>> main함수가 int이기때문 (#3) 메인함수인 정수형int 가 종료될때 
	//프로그램 종료라는 의미의 0을 반환한다는 의미 
	//위의 메인함수 int main(void)  ,  return 0; 은 고정된 하나의 약속개념

}
*/

/*2강
//변수=x 같이 프로그램 실행중 변경될수있는 값 상수=원주율 같이 프로그램에 저장되어 변경되지않는값 , 값을 정한 뒤 변경할 필요가없는 데이터
#include <stdio.h>
int main(void)
{
	int x;// 정수형 변수 x 선언
	x = 5;
	//printf("%d", x); //%d>> 이자리에는 int의 값이 들어간다 라는뜻
	printf("변수 x 의 메모리크기는 %d입니다.", sizeof(x)); //sizeof(x)>> 변수 x의 메모리 크기를 알려줌
	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x=%d\n", x);// \n>> 줄바꿈의 의미
	printf("y=%.2f\n", y);// %.nf>>> n번째소숫점 자리까지 표현 %d는 정수현 %.nf는 실수형
	// >>출력하면 float 형은 4바이트 공간차지하기에 뒤에 값이 날아갔음 >>> double 사용하면 더 큰값 나타낼수있는 자료형
	printf("z=%.2f\n", z); //>>출력하면 소숫점 자리까지 온전히 표현됨 double은 8바이트 할당되기에
	return 0; 
}
*/
/*
//오버플로우에 대하여
#include <stdio.h>
#include <limits.h> // INT_MAX를 쓰기위한 라이브러리(한계값 범위들 포함하는 라이브러리)

int main(void)
{
	int x = INT_MAX;// int형이 가질수있는 가장 큰 값 출력
	printf("int형의 최댓값 x 는 %d입니다\n", x);
	printf("x+1은 %d입니다.\n", x + 1);// 정수형 int 가 가질수있는 최댓값(메모리할당량)을 1초과한 값을 출력하려는 시도
	// 출력하면 가장큰값에서 한바퀴 돌아서 최솟값으로 출력됨 >>> 이것이 바로 오버플로우 
	return 0;
}
*/
/*
//변수의 사칙연산
#include<stdio.h>
int main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d입니다.\n", x);
	printf("y=%d입니다.\n", y);
	printf("x+y는 %d입니다.\n", x + y);
	printf("x-y는 %d입니다.\n", x - y);
	printf("x*y는 %d입니다.\n", x * y);
	printf("x/y는 %d입니다.\n", x / y); //>>> 정수형으로 출력했기에 몫만 출력되었음
	return 0;
}
*/

//3강
//자료형
/*
#include<stdio.h>
#define MONTHS 12 // 상수 MONTH에 대한 정의를 해준다 #define 으로 month를 12 로 정의
int main(void)
{
	double monthsalary = 1000.5;
	printf("%.2f$", monthsalary*MONTHS);
	return 0;
	
}
*/
/*아스키코드 사용, 정수형 문자형의 자유로운 변환
#include<stdio.h>
int main(void)
{
	char x = 'A'; // =char x = 65; (이렇게해도 같은의미다)  >>> 아스키코드상 65=A 
	int y = 65;
	char z = 'B';
	int a = 66;
	printf("%c\n", x); // 위의 char x = A를 int x = 65;로 해도 이 열에서 printf에서 (%c>>>문자열 출력)로 하면 문자열로 변환되어 아스키코드로 A가 출력된다.
	printf("%c\n", y);
	printf("%c\n", z);
	printf("%c\n", a);
	printf("%d\n", z);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("10진수로 출력: %d\n ", x);
	printf("8진수로 출력: %o\n ", x); // %d>> 정수10진수 %o>>정수8진수
	printf("16진수로 출력: %x\n ", x);
	return 0;
}
*/

//4강
//연산자
//사칙연산ㅡㅡ 1+2에서 1,2 는 피연산자 +는 연산자ㅡㅡㅡ!=not , ++=1을 더한다는 의미, %=나머지

//초를 분으로 표현하기
/*
#include<stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d초는 %d분 %d초입니다", input, minute, second);
	return 0;
}
*/

//증감연산자
/*
#include<stdio.h>
int main(void)
{
	int x = 0;
	printf("현재의 x는 %d입니다\n", x);
	x++;
	printf("현재의 x는 %d입니다\n", x);
	printf("현재의 x는 %d입니다\n", x--); //출력하고 나서 -1이 된다.
	printf("현재의 x는 %d입니다\n", x);
	printf("현재의 x는 %d입니다\n", --x); //출력전 -1이 된다.
	return 0;
}
*/

//복합대입연산자
// (x++) = (x+=1) = (x=x+1)
/*
#include<stdio.h>

int main(void)
{
	int x = 100;
	printf("현재 x의 값은 %d입니다.\n", x);
	x += 50; // x = x+50 >> 대수학에서는 = 의 의미가 같다 라는 표현 , 하지만 프로그래밍에서는 = 는 대입한다는 의미
	printf("현재 x의 값은 %d입니다.\n", x);
	x -= 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x *= 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x /= 50;
	printf("현재 x의 값은 %d입니다.\n", x);
	x %= 3;
	printf("현재 x의 값은 %d입니다.\n", x);

	return 0;
}
*/

//5강
//관계연산자
/*
#include<stdio.h>

int main(void)
{
	int x = 50;
	int y = 30;
	// x=y >> x에 y를 대입, x==y >> 참일 경우 x=y
	printf("x가 y 와 같은가? (참이면 1 거짓이면 0으로 출력) >>>%d\n", x == y); // c언어에서는 참=1 거짓=0 이라고 나타냄
	printf("x가 y 와 다른가? (참이면 1 거짓이면 0으로 출력) >>>%d\n", x != y); // != 다른지에 대한 판별 
	printf("x가 y 보다 큰가? (참이면 1 거짓이면 0으로 출력) >>> %d\n", x > y);
	printf("x에 y값을 넣으면? (참이면 1 거짓이면 0으로 출력) >>> %d\n", x = y); // 30인 y가 x에 대입되어 x는 30이 됨>> %d가 수식으로 연결되어있다면
	// 수식이 해결되고나서의 왼쪽의 변수가 %d에 대입됨 >>> 30인 y값이 x에 대입되고 x의 값이 출력됨
	int a = 50;
	int b = 50;
	printf("a가 b 와 같은가? (참이면 1 거짓이면 0으로 출력) >>>%d\n", a == b);

	return 0;

}
*/
//논리연산자
// 100< x <200  = 잘못된 표현 >>> 왼쪽부터 판별한다는 기준 100<x 를 판별한 후 참이면 1이 도출됨>> 그러면 1<200 이 되기에 판별이 안됨
// 그래서 (100<x)&&(x<200) >>> 이렇게 해야 제대로 판별이 됨
/*
#include<stdio.h>
int main(void)
{
	int x = 50;
	int y = 30;
	printf("x가 y보다 크고 y는 40 미만입니까?%d\n", (x > y) && (y < 40)); // && >> and 의 의미
	printf("x가 y보다 작거나 y가 30입니까?%d\n", (x < y) || (y == 30)); // || >> or 의 의미
	printf("x가 50이 아닙니까?%d\n", x != 50);
	return 0;
}


*/
//조건연산자
/*
#include<stdio.h>

int main(void)
{
	int x = -50; 
	int y = 30;
	int absoluteX = (x > 0) ? x : -x; // 괄호의 수식이 참이면 좌측의 값 선택 거짓이면 우측의 값이 선택됨 >> 절댓값이 반환되는 수식
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x의 절댓값은 %d이고 x와 y중 최댓값은 %d 최솟값은 %d입니다.\n ", absoluteX, max, min);
	return 0;
}
*/
//pow연산자
/*
#include<stdio.h>
#include<math.h> // math에는 pow 나 abs같은 수학관련연산함수가 들어감

int main(void)
{
	double x = pow(2.0, 20);  // 2의 20제곱을 하겠다.
	printf("2의 20제곱은 %.0f 입니다. \n", x); // %.0f >> 실수의 표현 %.0f면 정수로 출력한다는 의미 %.2f>> 소숫점 두번째까지 나타낸다는 의미 
	return 0;
}
*/

//6강
//조건문&&반복문
/*
#include<stdio.h>

int main(void) 
{
	int x = -150;
	if (x < 0)
	{
		x = -x;
	}
	printf("x의 절댓값은 %d입니다. ", x);
	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int score = 97; // << 점수를 바꾸면 계속 결과값이 바뀜
	if (score >= 90)
	{
		printf("당신의 학점은 A입니다 .\n");
	}
	else if (score >= 80)
	{
		printf("당신의 학점은 B입니다 .\n");
	}
	else if (score >= 70)
	{
		printf("당신의 학점은 C입니다 .\n");
	}
	else  // if와 else if에 모두 해당 되지 않는경우
	{
		printf("당신의 학점은 f입니다");
	}
	return 0;
}
*/

//7강

/*
//윤년 알고리즘, 윤년이란 4년마다, 100년단위일때는 아님, 400년 단위일때는 무조건 윤년 
#include<stdio.h>

int main(void)
{
	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);

	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return 0;
}
*/

//1부터 1000까지의 합을 구해보자(while 문 활용)
/*
#include<stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;
	while (x <= 1000)
	{
		sum = sum + x;
		x++;
	}
	printf("1부터 1000까지의 합은 %d입니다", sum);
	return 0;
}
*/
//사각형 출력하기( for문 사용)
/*
#include<stdio.h>
#define N 10 // 상수 N 초기화

int main(void)
{
	int i, j;   //i랑 j초기화
	for (i = 0; i < N; i++) // i초기화(초기값) , 조건추가, 반복 (자주나오는 형태)
	{
		

		for (j = 0; j<=N; j++)

		{
			printf("★");
		}
		printf("\n");

		
	}

	return 0;
}
*/
//피라미드 출력하기
/*
#include<stdio.h>
#define N 20
int main(void)
{
	int i, j;
	for (i = 0; i < N; i++) //20번을 반복하겠다 >>> 피라미드 높이설정
	{
		for (j = N - i - 1; j > 0; j--) // 공백의 칸수 ( 뒤의 공백은 굳이 입력안해도됨, 별 앞의 공백만 출력하면 됨)
		{
			printf(" ");

		}
		for (j =0;j<i; j++ ) // 별갯수 입력
		{
			printf("★");

		}
		for (j = 0; j < i-1; j++) // 추가적인 별갯수 입력
		{
			printf("★");

		}
		printf("\n");
	}

	return 0;
	
}
*/
/*
#include<stdio.h>
#define S 10
int main(void)
{
	int x;
	int y;
		for (x = 1; x <= S; ++x)
		{
			for (y=x; y>0; y--) 
			{
				printf("*");
			}
			printf("\n");
	}
		
	return 0;
}
*/
//모래시계
/*
#include<stdio.h>
#define S 7
int main(void)
{
	int x;
	int y;
	for (x = 0; S - 2 * x > 0; x++) //0123 456
	{
		for (y = x; (y > 0) && (y < 4); y--) //0123
		{
			printf(" ");
		}
		for (y = S - 2 * x; y > 0; y--)
		{
			printf("*");

		}
		printf("\n");
	}
	for (x = 1; x <= 3; x++)
	{
		for (y = S - x; y > 4; y--)
		{
			printf(" ");
		}
		for (y = 1 + 2 * x; y > 0; y--)
		{
			printf("*");
		}
		printf("\n");

	}

	return 0;
}
*/
#include<stdio.h>

int main(void)
{
	int x = 7;
	printf("%d는 7입니다", x);
		return 0;
}