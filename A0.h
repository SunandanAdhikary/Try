#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *next1,*next2;
} node;

struct node* createlist_A(int a,int b,int n);

struct node* createlist_B(int a,int b,int n);

void printlist(struct node* X); //sorted and in O(n)

void printBothList(struct node* X,struct node* Y); //sorted and in O(n)