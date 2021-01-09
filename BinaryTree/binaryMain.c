#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    struct _Node *Left;
    int Data;
    struct _Node *Right;

} Node;

// ��� �ʱ�ȭ (����� �ּҸ� return�Ѵ�.)
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->Data = data;

    // ��,�� �ڽĵ��� ã���鼭 �־��ٰ���
    newNode->Right = NULL;
    newNode->Left = NULL;
}

// ����
// &root : root�� �ּ� (?)
void insertNode(Node** root, int data) {
    Node* newNode = createNode(data);

    // �� Ʈ�����ٸ�?
    if (*root == NULL) {
        // root�� ����
        // root�� �ּҸ� �ִ� ������.
        *root = newNode;
    }

    // ��Ʈ�� �ƴϸ�?
    else {
        //�θ� ������ ũ��?
        if ((*root)->Data > data) {
            // ���� �ڽ� ����ֳ�?
            if ((*root)->Left == NULL) {
                (*root)->Left = newNode;
            }
            // ������ �������� ������
            else {
                // **��������� (recursion) �� ģ���� �θ�� �ؼ� �����Ѵ�.**
                insertNode(&((*root)->Left), data);
            }
        }
        // �θ� ������ ������
        else if ((*root)->Data < data) {
            if ((*root)->Right == NULL) {
                (*root)->Right = newNode;
            }
            else {
                insertNode(&((*root)->Right), data);
            }
        }
        else {
            printf("This input is already in Tree");
        }


        
    }
}

// �˻��� ����, ���� �ּҸ� �˸�ȴ�. 
// ������ �Ǵ� ������ �ٲ��� �ʾ��൵ �Ǵϱ�!!
Node* Search_Data(Node* root, int data)
{
    // root ���� ��� �޷��� �༮ ����
    Node* horse = root;
    Node* result = NULL;

    while (horse != NULL)
    {
        // data�� �� ������?
        if (horse->Data > data)
        {
            horse = horse->Left;
        }
        else if (horse->Data < data)
        {
            horse = horse->Right;
        }
        else {
            result = horse;
            break;
        }
        
    }
    //ã���� null �ƴϰ�, ��ã���� null ��.
    return result;
}


Node* insertsingleNode(Node* root, int data) {
    Node* newNode = createNode(data);

    // �� Ʈ�����ٸ�?
    if (root == NULL) {
        // root�� ����
        root = newNode;
        return root;
    }

    // ��Ʈ�� �ƴϸ�?
    else {
        //�θ� ������ ũ��?
        if (root->Data > data) {
            // ���� �ڽ� ����ֳ�?
            if (root->Left == NULL) {
                root->Left = newNode;
                return root;
            }
            // ������ �������� ������
            else {
                // **��������� (recursion) �� ģ���� �θ�� �ؼ� �����Ѵ�.**
                root->Left = insertsingleNode(root->Left, data);
                return root;
            }
        }
        // �θ� ������ ������
        else if (root->Data < data) {
            if (root->Right == NULL) {
                root->Right = newNode;
                return root;
            }
            else {
                root->Right = insertsingleNode(root->Right, data);
                return root;
            }
        }
        else {
            printf("This input is already in Tree");
            return root;
        }

    }
}

int main() {
    // ����ü ������
    Node* root;
    root = NULL;
                    //root�� ���°� �߿��Ѱ� �ƴ϶�,
                    // root�� �ּҸ� �����İ� �߿��ϴ�.
                    // NULL�� �ѱ�°Ŵ�.
    root = insertsingleNode(root, 4);
    insertsingleNode(root, 2);
    insertsingleNode(root, 3);
    printf("root : %d\n root->Left : %d\n root->Left->Right:%d", root->Data, root->Left->Data, root->Left->Right->Data);

    //printf("insert single - root : %d\n", root->Data);
    //insertNode(&root, 4);
    //printf("Insert Double - root : %d", root->Data);

    return 0;
}
