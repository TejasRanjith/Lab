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
    if(!(*tree))
    {
        return NULL;
    }
    
    if(val<(*tree)-> data)
    {
        search(&((*tree)->left),val);
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right),val);
    }
    else if(val == (*tree)-> data)
    {
        return *tree;
    }
}

void main()
{
    node *root;
    node *tmp;
    int i,size,val,key;
    
    root = NULL;
    printf("Enter the number of nodes in the tree: ");
    scanf("%d",&size);
    printf("\nEnter the nodes of the tree : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&val);
        insert(&root,val);
    }
    
    printf("Pre-Order Display:\n");
    print_preorder(root);
    printf("\n");
    
    printf("In-Order Display:\n");
    print_inorder(root);
    printf("\n");
    
    printf("Post-Order Display:\n");
    print_postorder(root);
    printf("\n");
    
    printf("Enter the element to be searched in the tree : ");
    scanf("%d",&key);
    
    tmp = search(&root, key);
    if(tmp)
    {
        printf("Searched node = %d , is found",tmp->data);
    }
    else
    {
        printf("Node not Found in tree.\n");
    }
    deltree(root);
}


