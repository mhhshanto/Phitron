#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *nxt;
};
class LinkedList{
  public:
      int sz;
      node *head;

      LinkedList(){
          sz = 0;
          head = NULL;
      };
      //create a new node with data = value and nxt = NULL
  node *CreateNewNode(int value){
    node *newnode = new node;
    newnode->data = value;
    newnode->nxt = NULL;
    return newnode;
  }
  void InsertAtHead(int value){
    sz++;
    node *a = CreateNewNode(value);
    if(head == NULL){
      head = a;
      return;
    }
    a->nxt = head;
    head = a;
  }
  void Traverse(){
    node* a = head;
    while(a!= NULL){
      cout<<a->data<<" ";
      a = a->nxt;
    }
    cout<<"\n";
  }
  int SearchDistinctValue(int value){
    node* a = head;
    int index = 0;
    while (a!= NULL)
    {
      if(a->data== value){
        return index;
      }
      a = a -> nxt;
      index++;
    }
    return -1; 
  }
  void SearchAllValue(int value){
    node* a = head;
    int index = 0;
    while(a!= NULL){
      if(a->data == value){
        cout<<value<<" is found at index "<<index<<"\n";
      }
      a = a->nxt;
      index++;
    }
  }
  int getSize(){
    return sz;
  }
  void InsertAtAnyIndex(int index,int value){
    if(index < 0 || index > sz){
      return;
    }
    if(index == 0){
      InsertAtHead(value);
      return;
    }
    sz++;
    node *a = head;
    int cur_index = 0;
    while(cur_index != index- 1){
      a = a->nxt;
      cur_index++;
    }
    node *newnode = CreateNewNode(value);
    newnode->nxt = a->nxt;
    a->nxt = newnode;
  }
  void DeleteAtHead(){
    if(head == NULL){
      return;
    }
    sz--;
    node *a = head;
    head = a->nxt;
    delete a;
  }
};

int main()
{
  LinkedList l;
  l.Traverse();
  l.InsertAtHead(10);
   cout<<l.getSize()<< "\n";
  l.Traverse();
  l.InsertAtHead(30);
   cout<<l.getSize()<< "\n";
  l.Traverse();
  l.InsertAtHead(20);
   cout<<l.getSize()<< "\n";
  l.Traverse();
  l.InsertAtHead(1);
  l.InsertAtAnyIndex(3,3999);
  l.Traverse();
  l.DeleteAtHead();
  l.DeleteAtHead();
  l.DeleteAtHead();
  l.DeleteAtHead();
   cout<<l.getSize()<< "\n";
  return 0;
}
