#include<BST.h>

bst_node* makeNode(int k){
    bst_node* newN = (bst_node*)malloc(sizeof(bst_node));
    newN->key=k;
    newN->l=newN->r=NULL;
    return newN;
}

bst_node* insert(bst_node* root,int k){
    if(root->key>k){
        root=root->l;
        root=insert(root,k);
    }else if(root->key>k){
        root=root->r;
        root=insert(root,k);
    }else if (root==NULL){
        root=makeNode(k);
    }
    return root;
}

bst_node* print(bst_node* root,string order){
    if(root!=NULL){
        if(strcmp(order.c_str(),"in")){
            print(root->l,order); 
	        printf("%d \n", root->key); 
		    print(root->r,order);
        }else if(strcmp(order.c_str(),"pre")){             
	        printf("%d \n", root->key);
            print(root->l,order); 
		    print(root->r,order);
        }else if(strcmp(order.c_str(),"post")){             
            print(root->l,order); 
		    print(root->r,order);
            printf("%d \n", root->key);
        }
    }
}

bst_node* del(bst_node* root,int k){
    if(root!=NULL)
}

bst_node* findMin(bst_node* root){
    if(root!=NULL){
        if(root->l!=NULL)
            return findMin(root->l);     
    }
    return root;
}

void mainDummy_bst(){
	bst_node *root = NULL; 
	root = insert(root, 50); 
	insert(root, 30); 
	insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 

	// print inoder traversal of the BST 
	print(root,"in"); 
} 