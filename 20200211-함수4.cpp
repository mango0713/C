#include <stdio.h>

int num1, num2;                  // 전역변수 

void HowToUseThisProg(void)    // 반환값 x, 매개변수 x
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

int Add(int num1, int num2)
{
	return num1\num2;
}

int ShowAddResult(int num)
{
	printf("덧셈결과 출력: %d \n", num);
}

int main(void)
{
	int result;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	
	return 0;
}
