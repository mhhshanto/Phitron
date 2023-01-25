#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node*nxt;
  node*prv;
};
class DoublyLinkList{
  public:
        node *head;
        int sz;
        DoublyLinkList(){
          head = NULL;
          sz = 0;
        }
        node*CreateNewNode(int data){
          node*newnode = new node;
          newnode->data = data;
          newnode->nxt = NULL;
          newnode->prv = NULL;
        }
  void InsertAtHead(int data){
    sz++;
    node*newnode = CreateNewNode(data);
    if (head = NULL)
    {
     head = newnode;
     return;
    }
    
  }
};

int main()
{
  
  

  return 0;
}
