#include <stdio.h>
#include <stdlib.h>

typedef struct listNode {
  int Data;
  struct listNode* Next;
  struct listNode* Prev
} Node;

Node* createNode(int data) {
  // ���� ���� ���
  Node* newNode = (Node*)malloc(sizeof(Node));

  // variable initialization
  newNode->Data = data;
  newNode->Next = NULL;
  newNode->Prev = NULL;

  return newNode;
}

// ������ : �޸� �󿡼��� ���ش�.
void deleteNode(Node* Node) { free(Node); }

//�ش� �ε����� �� ��带 ����Ͷ�.
//(������ �ʿ�)
Node* getNodeAt(Node* head, int idx) {
  // head���� idx���� �޸� hores
  Node* horse = head;

  // �޸��� Ƚ��
  int cnt = 0;

  while (horse != NULL) {
    // idx ���� �޸��Ŵ�.
    if (cnt == idx) return horse;
    horse = horse->Next;
    cnt += 1;
  }
  // �ƹ��͵� ��ã��
  // �߰��� NULL�� ������ ������ ���
  return NULL;
}

//����Ʈ�� ������ ���?
//����� head�� �޴´�.
int countNode(Node* head) {
  int cnt = 0;
  Node* horse = head;
  while (horse != NULL) {
    horse = horse->Next;
    cnt++;
  }
  return cnt;
}
// ��� �� �ڿ� append ���ֱ�
// (why ����������?!) --> ����Ʈ�� head�� �ٲ� �� �ִ�.
void addNode(Node** head, Node* newNode) {
  // no list exists
  if ((*head) == NULL) {
    *head = newNode;
  }
  // list exists
  else {
    Node* horse = (*head);
    // ������ NULL�� ������ �޷�
    // == ������ NULL�� �� ����!
    while (horse->Next != NULL) {
      horse = horse->Next;
    }
    horse->Next = newNode;
    newNode->Prev = horse;
  }
}

// ���� ��ġ ������ ����
void inserAfterNode(Node* current, Node* newNode) {
  // head
  // �޴� ���� prev, next ��� NULL
  if ((current->Next == NULL) && (current->Prev == NULL)) {
    current->Next = newNode;
    newNode->Prev = current;
  }

  // not head
  // tail("??) 
  else if (current->Next == NULL) {
    current->Next = newNode;
    newNode->Prev = current;
  }

  else {
    // current�� Next -> Prev : ������ ������ Prev
    current->Next->Prev = newNode;
    newNode->Prev = current;
    // ������ ��������! (������ ������ ������ �� �� ����)
    newNode->Next = current->Next;
    current->Next = newNode;
  }

  // in the middle of 2 nodes
  newNode->Prev = current;
  newNode->Next = current->Next;
}
// head�� ��ȭ�� �ֱ� ������ ���� ������
                // head�� �ּҴ� &List �� ���� �Ѱ��ش�.
void removeNode(Node** head, Node* remove) {
  
  // remove �Ϸ��°� head�϶�?
    // head�� �ڷ� �о�����Ѵ� !! -> !!����������!!
  if (*head == remove) {
    // head�� remove�Ϸ��� �������� �о��ش�.
    *head = remove->Next;
  }

  // else ���� �ʿ����.
  if (remove->Next != NULL) {
      //������� ���� ���� ���� ���� �������� �տ� �༮ ������ �ٲ�����Ѵ�.
    remove->Next->Prev = remove->Prev;
    }
  
  if (remove->Prev != NULL) {
    remove->Prev->Next = remove->Next;
  }

  //���� ��������, remove�� ����Ű�� �ְ� �ƹ��� ����.
  deleteNode(remove);
  //
}

int main() { 
    
    return 0; 

}
