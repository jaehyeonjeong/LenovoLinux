#include <stdio.h>

int main()
{
	int a;
	a = 2;

	printf("%p \n", &a);
	//printf("%x \n", &a); 
	//&a의 값을 16진수 형태로 출력 불가능
	//&a는 8바이트의 크기를 가짐
	
	
	int *p;
	int b;

	printf("p = &b연산 수행 하기전 포인터 p에 들어가 있는 값 : %p \n", p);
	p = &b;

	printf("포인터 p에 들어 있는 값 : %p \n", p);
	printf("int 변수 b가 저장된 주소 : %p \n", &b);

	int c = 3;
	p = &c;

	printf("c의 값 : %d \n", c);
	printf("*p의 값 : %d \n", *p);

	int d;
	p = &d;
	*p = 4;

	printf("d 의 값 : %d \n", d);
	printf("*p 의 값 : %d \n", *p);

	int f;
	int **dpf;
	int *pf;


	f = 4;
	pf = &f;
	dpf = &pf;
	
	printf("이중 포인터 **dpf의 값 : %d \n", **dpf);
	printf("이중 포인터 *pf의 값 : %d \n", *pf);
	printf("이중 포인터 f의 값 : %d \n", f);
	

	return 0;
}
