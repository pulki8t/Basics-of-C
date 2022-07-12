#include <stdio.h>
#include <stdlib.h>

struct node
{
  int item;
  struct node* left;
  struct node* right;
};

struct node* create(int data)
{
  struct node* x;
  x= (struct node*)malloc(sizeof(struct node));
  x->item= data;
  x->left= NULL;
  x->right= NULL;
  return x;
}

void preorder(struct node* root)
{
  if(root!=NULL)
  {
    printf("%d ", root->item);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(struct node* root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->item);
  }
}

void inorder(struct node* root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d ",root->item);
    inorder(root->right);
  }
}

struct node* insert(struct node* node, int item)
{
  if (node == NULL)
  {
    return create(item);
  }
  else if (item< node->item)
  {
    node->left = insert(node->left, item);
  }
  else if (item > node->item)
  {
    node->right = insert(node->right, item);
  }
  return node;
}

void search(struct node* node, int item)
{
  if(node!=NULL)
  {
    if (node->item == item)
    {
      printf("Found");
    }
    else if (item< node->item)
    {
      search(node->left, item);
    }
    else if (item > node->item)
    {
      search(node->right, item);
    }
  }
  else
  {
    printf("Not Found");
  }
}
    

void main()
{
  struct node* p = create(15);
  struct node* pa = create(14);
  struct node* pb = create(16);
  struct node* pc = create(11);
  struct node* pd = create(13);

  p->left= pa;
  p->right= pb;
  pa->left= pc;
  pa->right= pd;

  insert(p, 17);

  preorder(p);
  postorder(p);
  inorder(p);

  search(p, 16);
  search(p, 19);
}
