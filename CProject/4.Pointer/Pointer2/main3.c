#include <stdio.h>

int main()
{
	int a;
	int b;
	const int* const pa = &a;

	*pa = 3; // 올바르지 않은 문장
	pa = &b; // 올바르지 않은 문장

	return 0;

}
