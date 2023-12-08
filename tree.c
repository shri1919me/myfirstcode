#include<stdio.h>
#include<stdlib.h>
struct treeNode{
    char data;
    struct treeNode*left;
    struct treeNode*right;

};
struct treeNode* newNode(char *data)
{
    struct treeNode*node=(struct treeNode*)malloc(sizeof(struct treeNode));
    node->data =*data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct treeNode* printorder(struct treeNode* root){
    if(root!=NULL){
        printorder(root->left);
        printf("%C",root->data);
        printorder(root->right);
    }
}
void main()
{
    struct treeNode* root=newNode("r");
    root->left=newNode("h");
    root->right=newNode("i");
    root->left->left=newNode("s");
    root->right->right=newNode("a");
    root->right->right->left=newNode("n");
    root->right->right->right=newNode("t");
    root->right->right->right->right=newNode("h");
    
   // free(root->data=NULL);
    printf("tree is in order \n");
    printorder(root);
    printf("\n");
}