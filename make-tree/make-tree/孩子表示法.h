#pragma once
//���ӱ�ʾ��
#define SIZE 100
//��ͷ���
typedef struct {
    int data;
    child_prt* first_child;  //ָ�������һ�����
}Tnode;


//���ӽ��������
typedef struct {
    int child;
    child_prt* next;
}* child_prt;

//��
typedef struct {
    Tnode node[SIZE]; //��ͷ����
    int r, n;         //������������
}child_tree;
