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
  void DeleteAnyIndex(int index){
    if(index < 0 || index > sz-1){
      return;
    }
    if(index == 0){
      DeleteAtHead();
      return;
    }
    sz--;
    node *a = head;
    int cur_index = 0;
    while(cur_index != index-1){
      a = a->nxt;
      cur_index++;
    }
node *b = a->nxt;
a->nxt = b->nxt;
delete b;
  }
  void InsertAfterValue(int value , int data){
    node *a = head;
    while (a != NULL)
    {
      if(a->data == value){
        break;
      }
      a = a->nxt;
    }
    if( a == NULL){
      cout<< value << "does not exist in the linked-list. \n";
      return;
    }
    sz++;
    node *newnode = CreateNewNode(data);
    newnode ->nxt = a->nxt;
    a ->nxt = newnode;
  }
  void ReversePrint2(node *a){
    if(a == NULL){
      return;
    }
    ReversePrint2(a->nxt);
    cout<<a->data<<" ";
  }
  void ReversePrint(){
    ReversePrint2(head);
    cout<<"\n";
  }
};

int main()
{
  LinkedList l;
  l.InsertAtHead(10);
  l.InsertAtHead(30);
  l.InsertAtHead(20);
  l.InsertAtHead(1);
   l.Traverse();
   l.ReversePrint();
  return 0;
}
