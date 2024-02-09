/*상수 포인터*/
#include <stdio.h>

int main()
{
	int a;
	int b;
	const int* pa = &a;

	*pa = 3; // 올바르지 않은 문장
	// const int의 의미는 그 값을 절대로 바꾸지 말라라는 의미
	pa = &b; // 올바른 문장
	return 0;
}
