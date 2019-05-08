#include <A0.h>


node* createlist_A(int a,int b,int n){
    node* A = NULL;
    node* next = NULL;
    int i=1;
    next=A;
    while (i*a<=n)
    {
        if (i*a!=i*b)
        {
            next -> val = a;
        }
        
        
        next=next -> next1;
    }
    
    


    return A ;
}


