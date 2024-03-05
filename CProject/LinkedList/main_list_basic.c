#include <stdio.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;

int main()
{
	Node a, b, c, d;

	a.data = 1;
	a.next = &b;

	b.data = 2;
	b.next = &c;

	c.data = 3;
	c.next = &d;

	d.data = 4;
	d.next = NULL;

	return 0;
}

