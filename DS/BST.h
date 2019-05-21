#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

typedef struct bst_node {
    int key;
    struct bst_node* l;
    struct bst_node* r;
} bst_node;

bst_node* makeNode(int key);

bst_node* insert(bst_node* root,int k);

bst_node* print(bst_node* root,string order);

bst_node* del(bst_node* root,int k);

bst_node* findMin(bst_node* root);

void mainDummy_bst();