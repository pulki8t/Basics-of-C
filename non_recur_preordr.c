#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* left;
	struct node* right;
	int data;
};
struct stack
{
	struct node* data;
	struct stack* next;
};

void push(struct stack** top,struct node* n);
struct node* pop(struct stack** top);
int isEmpty(struct stack* top);

int preorder(struct node* root)
{ 
	struct node* temp = root;
	struct stack* s_temp = NULL;
	int try = 1;
	while(try)
	{
		if(temp!=NULL)
    {
			printf("%d ",temp->data);
      push(&s_temp, temp);
			temp = temp->left;
		}
		else
    {
			if(!isEmpty(s_temp))
      {
				temp = pop(&s_temp);
				temp = temp->right;
			}
			else
				try = 0;
		}
	 } 
}

void push(struct stack** top,struct node* n)
{
	struct stack* new = (struct stack*)malloc(sizeof(struct stack));
	new->data = n;
	new->next = (*top);
	(*top) = new;
}

int isEmpty(struct stack* top)
{
	if(top==NULL)
		return 1;
	else
		return 0;
}

struct node* pop(struct stack** top1)
{
	struct node* item;
	struct stack* top;
	top = *top1;
	item = top->data;
	*top1 = top->next;
	free(top);
	return item;
}

struct node* create(int data)
{
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	return (new);
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

	preorder(p); 
}