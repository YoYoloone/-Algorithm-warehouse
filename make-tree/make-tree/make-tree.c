#include<stdio.h>
#define MAX_TREE_SIZE 100
//数据结构树定义与遍历实现
typedef struct Treenode {
	int node_value;  //结点元素
	int parent;      //结点双亲
}treenode;
typedef struct Tree {
	treenode numbers[MAX_TREE_SIZE] ;  //双亲表示
	int n ;      //结点个数
}PTree;

int main(void) {
    
	return 0;
}