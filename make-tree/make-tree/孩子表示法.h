#pragma once
//孩子表示法
#define SIZE 100
//表头结点
typedef struct {
    int data;
    child_prt* first_child;  //指向链表第一个结点
}Tnode;


//孩子结点链表集合
typedef struct {
    int child;
    child_prt* next;
}* child_prt;

//树
typedef struct {
    Tnode node[SIZE]; //表头数组
    int r, n;         //结点个数，结点度
}child_tree;
