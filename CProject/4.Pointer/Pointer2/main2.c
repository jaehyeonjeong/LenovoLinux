#include <stdio.h>

int main()
{
	int a;
	int b;
	int* const pa = &a;

	*pa = 3; // 올바른 문장
	pa = &b; // 올바르지 않은 문장
	//pa의 값이 절대로 바뀔 수 없다는 의미

	return 0;
}
