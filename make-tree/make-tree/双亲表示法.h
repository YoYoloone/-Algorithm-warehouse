#pragma once
//����˫�ױ�ʾ
#include<stdio.h>
#define MAX_TREE_SIZE 100
//���ݽṹ�����������ʵ��
typedef struct Treenode {
	char node_value;  //���Ԫ��
	int parent;      //˫��λ����
}treenode;
typedef struct Tree {
	treenode numbers[MAX_TREE_SIZE] ;  //˫�ױ�ʾ
	int n ;      //������
}PTree;

//���ҵ�ǰ����˫�׽��
//��һά˳�����ڲ���
//���ؽ����������
//�������鿪ʼ��ַ���Լ���ǰ������ݡ�
char serch(treenode *start,char word ){

      //����һ������㣬���洢������Ҫ���ҵĵ�ǰ�������
	treenode single_word.node_value = word;



}
    