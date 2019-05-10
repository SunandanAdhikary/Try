#include <A0.h>


 node* createlist_A(int a,int b,int n){
    node* A = NULL;
    node* next = NULL;
    int i=1;    
    while (i*a<=n)
    {
        if(i==1){
            A=(node*)malloc(sizeof(node));
            next=A;
        }else
        {
            next -> val = i*a;           
            next -> next1 = (node*)malloc(sizeof(node));
            next -> next2 = NULL;           
        }  
        next=next -> next1;
        i++;
    }
   return A ;
}

node* createlist_B(int b,int n,node* A){
    node* A = NULL;
    node* next = NULL;
    int i=1;
    
    while (i*b<=n)
    {
        if(i==1){
            A=(node*)malloc(sizeof(node));
            next=A;
        }else
        {
            next -> val = i*b;
            if (i*a!=i*b){               
                next -> next1 = (node*)malloc(sizeof(node));
            }else
            {
                next -> next1 = (node*)malloc(sizeof(node));
                next -> next2 = (node*)malloc(sizeof(node));
            }
            
        }
        if (i*a!=i*b)
        {
            next -> val = a;
        }
        
        
        next=next -> next1;
        i++;
    }
   return A ;
}