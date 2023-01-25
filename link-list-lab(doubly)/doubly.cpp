#include <bits/stdc++.h>
using namespace std;

class node{
  public:
      int data;
      node *nxt;
      node *prv;
};
class DoublyLinkedList{
  public:
        node*head;
        int sz; 

        DoublyLinkedList(){
          head = NULL;
          sz = 0;
        }
node * CreateNewNode(int data){
  node *newnode = new node;
  newnode->data = data;
  newnode->nxt = NULL;
  newnode->prv = NULL;
  return newnode;
}
void InsertAtHead(int data){
  sz ++;
  node*newnode = CreateNewNode(data);
  if(head == NULL){
    head = newnode;
    return;
  }
  node *a = head;
  newnode ->nxt = a;
  a->prv = newnode;
  head = newnode;
}
void Traverse(){
  node*a = head;
  while (a!= NULL)
  {
    cout<<a->data<<" ";
    a = a->nxt;
  }
  cout<<"\n";
}
 int getSize()
        {
            return sz;
        }
void Insert(int index, int data){
  if(index > sz){
    return;
  }
  if(index == 0){
    InsertAtHead(data);
    return;
  }
  node *a = head;
  int cur_index = 0;
  while (cur_index != index-1)
  {
    a = a->nxt;
    cur_index ++;
  }
  node *newnode = CreateNewNode(data);
  newnode->nxt = a->nxt;
  newnode->prv = a;
  node *b = a->nxt;
  b->prv = newnode;
  a->nxt = newnode;
  sz++;
}
void Delete(int index){
  node *a = head;
  int cur_index = 0;
  while (cur_index != index)
  {
    a = a-> nxt;
    cur_index ++
  }
  
}
};

int main()
{
  DoublyLinkedList dl;
  dl.InsertAtHead(1);
  dl.InsertAtHead(10);
  dl.InsertAtHead(15);
  dl.InsertAtHead(155);
  dl.InsertAtHead(134);
  dl.Insert(2,2000);
  dl.Traverse();
  cout<<dl.getSize();
  
  return 0;
}
