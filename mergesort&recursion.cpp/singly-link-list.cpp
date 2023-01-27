#include <bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node *nxt;
};
class LinkedList{
  public:
  node *head;
  
  LinkedList(){
    head = NULL;
    
  }
  node *CreateNewNode(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->nxt = NULL;
   return newnode;
  }
  
  void InsertAtHead(int data){

    node *newnode = CreateNewNode(data);
    newnode->nxt = head;
    head = newnode;
  }
  void Traverse(){
    node *a = head;
    while (a!=NULL)
    {
      cout<<a->data<<" ";
      a = a->nxt;
    }
    cout<<"\n";
  }
  void Insert(int index, int data){

  }
};
int main()
{
 LinkedList l;
 l.InsertAtHead(30);
 l.InsertAtHead(130);
 l.InsertAtHead(330);
 l.InsertAtHead(303);
 l.InsertAtHead(3035);
 l.Traverse();
 
  return 0; 
}
