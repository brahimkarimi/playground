#include <stdio.h>
#include <stdlib.h>
#include "node.h"

tree *new_tre(int x){
    tree *nod=(tree *)malloc(sizeof(tree)) ;
    if(nod==NULL){
        printf("impossible \n") ;
        exit(0);
    }
    nod->data=x ;
    nod->left =NULL ;
    nod->right=NULL ;
    nod->parent=NULL ;

    //aide pour le developpeur
    printf("creation de %d \n",nod->data) ;
    return nod ;
}

void clean_tree(tree *A){
    if(A==NULL){
        return ;
    }

    printf("suppression de %d \n",A->data);
}


tree * add_tree(tree *left,tree *right,int x ){
    tree *nod=new_tre(x);
    nod->left=left ;
    nod->right=right ;

    if(left!=NULL)
        left->parent=nod ;
    if(right!=NULL)
        right->parent=nod ;

    return nod ;


}
int main()
{
    tree *arb ;
    new_tre(1);
    return 0;
}
