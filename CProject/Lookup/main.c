#include <stdio.h>

void lookup(void) {
	// 나이 정보는 선형구조이므로, lookup 배열을 만들어 사용할 수 있다.
	double aRate[10] = {
		0.0, 0.1, 0.25,
		0.5, 0.5,
		0.6, 0.65,
		0.8, 0.82, 0.97
	};

	int nAge = 0, i = 0, nFee = 1000;

	// 요금표를 출력
	printf("요금표\n");
	for(i = 1; i <= 10; ++i)
		printf("%d세 요금 : \t%d원\n", i, (int)(nFee * aRate[i - 1])); // 가격 * 과률금룰
	putchar('\n');

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	// 입력 범위를 초과하면, 최소 & 최대값으로 강제 조정
	if(nAge < 1) nAge = 1;
	else if(nAge > 10) nAge = 10;

	// 나이에 맞는 배열요소를 선택하고 별다른 제어문 없이 즉시 값을 출력
	printf("최종요금 : %d원\n", (int)(nFee * aRate[nAge - 1]));
	putchar('\n');
}

int main() {
	lookup();

	return 0;
}
