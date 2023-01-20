#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node *next;
};
class CreateList{
  public:
  node *head;
  CreateList(){
    head=NULL;
  }
  node * CreateNewNode(int value){
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
  }
void InsertAtHead(int value){
  node *a = CreateNewNode(value);
  if (head == NULL)
  {
    head = a;
    return;
  }
  a->next = head;
  head = a;
}
void Traverse(){
  node *a = head;
  while (a!= NULL)
  {
    cout<<a->data<<" ";
    a = a->next;
  }
 cout<<"\n"; 
}
};

int main()
{
  CreateList l;
  l.Traverse();
  l.InsertAtHead(10);
  l.Traverse();
  l.InsertAtHead(30);
  l.Traverse();
  l.InsertAtHead(20);
  l.Traverse();
  l.InsertAtHead(30);
  l.Traverse();
  return 0;
}
