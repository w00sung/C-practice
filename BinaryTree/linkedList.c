#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	struct NODE* next;
	int data;
}Node;

// Node�� �ּ�(curr or NULL)�� return���� �ϴ� �Լ�
Node *findNode(struct NODE *target, int data)
{
	if (target == NULL)
		return NULL;

	// ���� �༮�� �ּҸ� ���� ���� ����
	Node*curr = target->next;
	while (curr != NULL)
	{
		// ã���� ���� �����Ѵ�.
		if (curr->data == data)
			return curr;

		curr = curr->next;
	}
	// ���� �����ϸ� NULL�̴�. 
	return NULL;
}

void addFirst(Node* target, int data);
void removeFirst(Node* target);

int main()
{
	// ������ ���� �༮�� head
	Node* head;
	
	head = malloc(sizeof(Node));
	// �ƹ��� �Ȱ���Ű�� �ִ�.
	head->next = NULL;

	// ��� ��ġ ��� ������ 10�� �ִ´�.
	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	// horse : ��尡 �ִ� ������ �޸� ���̴�.
	Node* horse = head->next;
	while (horse != NULL) {
		printf("%d\n", horse->data);
		//���� �ּҸ� ���� �༮�� ���� �༮�� ����Ų��.
		horse = horse->next;
	}
	/* WOW!! -- �Լ��� �����ϸ� �ڵ� free 
		-> �߰����� ������ �Ұ����ϴ� ? */
//	free(node2);
//	free(node1);
	free(head);
	return 0;
}

// target node ���� ��带 �߰��Ѵ�.
void addFirst(Node* target, int data) 
{
	/* newNode�� �Լ� ������ �ڵ� ���� */
	Node* newNode = malloc(sizeof(Node)); // ��������
	
	// �߰��� ����鲨�ϱ� ���� target�� ������ ���� ����
	newNode->next = target->next; 
	// �Է¹��� data �ֱ�
	newNode->data = data;

	//������ �ִ� ���� ���� ����Ų��.
	target->next = newNode;
}

// target node ���� ��带 �����Ѵ�.
void removeFirst(Node* target)
{
	// ���� �༮ ��ġ�� �� �ִ´�
	Node* removeNode = target->next;

	// target���� �� ���� �༮�� ����Ų��.
	target->next = removeNode->next;

	// �����༮�� �޸� �Ҵ� �����ش�.
	free(removeNode);
}