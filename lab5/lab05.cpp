#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"lab05.h"
using namespace std;
void prepare (List * test)
{
  test->head=NULL;
}
void add (List * test, const char * buffer)
{
  node * n;
  n = (node*)malloc(sizeof(node));
  if (n==NULL)
  {
    puts("blad");
    exit(1);
  }
  n->data=(char*)malloc(sizeof(char)*strlen(buffer)+1);
  strcpy(n->data,buffer);
  n->next=NULL;
  if (test->head==NULL)
  {
    test->head=n;
  }
  else 
  {
    node* temp=test->head;
    while (temp
    ->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=n;
    
  }
}
bool empty (const List * p)
{
  if (p->head==NULL)
  {
    return 1;
  } 
  return 0;
}
void dump (const List *p)
{
  node* n=p->head;
  while (n!=NULL)
  {
    cout<<n->data<<" ";
    n=n->next;
  }
}
void clear (List *p)
{
  if (p->head!=NULL)
  {
    node * w=p->head;
    node *w1=w;
    while(w->next!=NULL)
    {
      free(w->data);
      w1=w;
      w=w->next;
      free(w1);
    }
    free(w->data);
    free(w);
    p->head=NULL;
  }
}