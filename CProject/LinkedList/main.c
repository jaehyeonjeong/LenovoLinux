#include <stdio.h>
#include <stdlib.h>

typedef struct node_
{
	int data;
	struct node_ *next;
} Node;

Node *head = NULL; // 첫 번째 노드의 주소 저장
Node *tail = NULL; // 마지막 노드의 주소 저장

int main()
{
	while(1)
	{
		int input;
		printf("연결할 데이터를 입력하세요. ");
		scanf("%d", &input);

		if(input <= 0) break;	// 입력 데이터가 0또는 음수면 종료

		Node *newnode = (Node*)malloc(sizeof(Node)); // 노드의 동적 생성

		newnode->data = input; // 노드의 데이터 삽입
		newnode->next = NULL;  // 새로 생성된 노드는 항상 마지막 노드이므로 next는 없음

		if(head == NULL) head = newnode; // head가 NULL이면 현재 연결리스트에 노드가 없다는 뜻
		else tail->next = newnode;  // 마지막에 생성했던 노드의 다음 노드를 방금 생성한 노드와 연결

		tail = newnode;  // 방금 생성한 노드가 마지막 노드이므로 Tail 변
	}

	printf("연결리스트 현재 상태 : ");경
	Node *cur = head;		// 첫 번째 노드(Node)부터 연결리스트 탐색
	while(cur != NULL)		// 더 이상 탐색할 노드가 없을 때 까지 반복
	{
		printf("%d ", cur->data);
		cur = cur->next;	// 연결된 다음 노드로 이동
	}

	puts("");

	while(1)
	{
		int k;
		printf("삭제할 데이터를 입력하세요. ");
		scanf("%d", &k);

		if(k <= 0) break;	// 입력한 데이터가 음수거나 0이면 삭제 종료

		int search = 0;		// 검색 여부 검사 (1이면 있다. 0이면 없다)
		Node *cur_prev = NULL; // cur을 뒤 따라 다니는 포인터 
		cur = head;			// 첫 번째 노드(head)부터 연결리스트 탐색
		while(cur != NULL)	// 더 이상 탐색할 노드가 없을 때 까지 반복
		{
			if(cur->data == k) // 입력한 데이터를 연결리스트에서 찾았음.
			{
				search = 1; // 찾았으므로 search 변수를 1로 변경
				break;		// 찾았으므로 탐색 종료
			}
			cur_prev = cur;	 // cur의 뒤를 따라다님
			cur = cur->next; // 연결된 다음 노드로 이동
		}

		if(search == 1) // 삭제할 노드를 찾았을 때
		{
			printf("%d를 삭제합니다.\n", k);

			if(cur == head) head = cur->next; // 삭제할 노드가 head면 head를 이동
			else cur_prev->next = cur->next; // 삭제할 노드의 이전 노드와 다음 노드를 연결
			
			free(cur); // cur 삭제
		}
		else
		{
			printf("%d를 찾을 수 없습니다.\n", k);
		}
	}

	printf("(삭제 후) 연결리스트 현재 상태 : ");
	cur = head;
	while(cur != NULL)
	{
		printf("%d " , cur->data);
		cur = cur->next;
	}
	puts("");
}

