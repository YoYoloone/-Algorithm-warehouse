#pragma once
//孩子兄弟表示法

typedef struct {
    int data;
    tree_node* first_child;//第一个孩子
    tree_node* left_bro;  //下一个兄弟

}tree_node;

//结点内递归定义树:

