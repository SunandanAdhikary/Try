#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void swap (int* a,int* b){
    printf("a=%d,b=%d",*a,*b);
    int*tmp=b;
    b=a;
    a=tmp;
    printf("a=%d,b=%d",*a,*b);
}

void main