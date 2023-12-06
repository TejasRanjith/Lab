#include <stdio.h>
#include <stdlib.h>

struct bin_tree
{
    int data;
    struct bin_tree *right,*left;
};
typedef struct bin_tree node;

void insert(node **tree,int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp=(node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    
    if(val<(*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}

void print_preorder(node *tree)
{
    if(tree)
    {
        printf("%d  ",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}

void print_inorder(node *tree)
{
    if (tree)
    {

        print_inorder(tree->left);
        printf("%d  ",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node *tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d  ",tree->data);
    }
}

void deltree(node *tree)
{
    if(tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node **tree,int val)
{
    if(!(*(tree))
    {
        return NULL;
    }
}
