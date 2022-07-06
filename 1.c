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

void insert(node* new, int data)
{
  node* prev= NULL;
  while(new!=NULL)
  {
    prev= new;
  }
}

void main()
{
  struct node* p = create(15);
  struct node* pa = create(13);
  struct node* pb = create(16);
  struct node* pc = create(11);
  struct node* pd = create(14);

  p->left= pa;
  p->right= pb;
  pa->left= pc;
  pa->right= pd;

  preorder(p);
}