#include<stdio.h>
#define MAX_TREE_SIZE 100
//���ݽṹ�����������ʵ��
typedef struct Treenode {
	int node_value;  //���Ԫ��
	int parent;      //���˫��
}treenode;
typedef struct Tree {
	treenode numbers[MAX_TREE_SIZE] ;  //˫�ױ�ʾ
	int n ;      //������
}PTree;

int main(void) {
    
	return 0;
}