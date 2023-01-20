#include <bits/stdc++.h>
using namespace std;
class node{
  public:
        int data;
        node* nxt;
};

class LinkedList{
  public:
  node* head;
  LinkedList(){ 
   head = NULL;
  }
node* CreateNewNode(int value){
  node* newnode = new node;
  newnode->data = value;
  newnode->nxt = NULL;
  return newnode;
}
  void InsertAtHead(int value){
node *a = CreateNewNode(value);
if(head == NULL){
  head = a;
}
  }
  void Traverse(){ 
node* a = head;
while (a!= NULL)
{
  cout<<a->data<<" ";
  a = a->nxt;
}
cout<<"\n";
 
  }
  void SearchDistinctValue(int value){

  }
  void SearchAllValue(){
  
  }
};
int main()
{
LinkedList l;
l.InsertAtHead(100);
l.Traverse();
l.InsertAtHead(30);
l.Traverse();
l.InsertAtHead(20);
l.Traverse();
l.InsertAtHead(30);
l.Traverse();
// l.SearchDistinctValue(10);
// l.SearchDistinctValue(5);
// l.SearchAllValue(30);
  return 0;
}
