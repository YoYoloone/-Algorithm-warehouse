#pragma once
//树的双亲表示
#include<stdio.h>
#define MAX_TREE_SIZE 100
//数据结构树定义与遍历实现
typedef struct Treenode {
	char node_value;  //结点元素
	int parent;      //双亲位置域
}treenode;
typedef struct Tree {
	treenode numbers[MAX_TREE_SIZE] ;  //双亲表示
	int n ;      //结点个数
}PTree;

//查找当前结点的双亲结点
//在一维顺序树内查找
//返回结点数据内容
//传入数组开始地址，以及当前结点内容。
char serch(treenode *start,char word ){

      //定义一个树结点，来存储我们需要查找的当前结点内容
	treenode single_word.node_value = word;



}
    