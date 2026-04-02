#include <bits/stdc++.h>
using namespace std;

  /*
      Linked List :
      complextity for insertion = O(1)
      complextity for deletion = O(1)
      complextity for searching = O(n)
      First element called : Head
      Last element called : Tail
      
  */

//implementaion:

class Node{
    public:
  int val;
  Node* next;
  
  //constructor:
   // way of writing:
  // Node():val(0),next(nullptr){}
  Node(){

    val=0;
    next=nullptr;
  }
 
  Node(int x){
   val=x;
   next=nullptr;
  }
};

class LinkedList{
  public:
    Node *head;
  
    
    LinkedList(){
      head=nullptr;
    }
     LinkedList(int x){
      head=new Node(x);
    }
  
  
    void append(int x){
      Node *newNode= new Node(x);
      if(head==nullptr){
        head=newNode;
      }
      else{
        Node *current=head;
        while(current->next!=nullptr){
          current=current->next;
        }
        current->next=newNode;
      }
    }
    
    void display(){
      Node *current=head;
      while(current!=nullptr){
        cout<<current->val<<endl;
        current=current->next;
      }
    }
  
};



int main() 
{
    //Reference: we used it just to point and its contain a random garbage address
    // Node *head;
    
    //they all point to null 
    // Node *node1=new Node(1); 
    // Node *node2=new Node(2);
    // Node *node3=new Node(3);
    
    
    // node1->next=node2;
    // node2->next=node3;
    
    // cout<<node1->next->val; //print node2 value
    
    // head=node1; 
    
    // while(head!=nullptr){
    //   cout<<head->val<<endl;
    //   head=head->next;
    // }
    
    
    
    LinkedList linkedin;
    linkedin.append(1);
    linkedin.append(3);
    linkedin.append(2);
    linkedin.append(8);
    
    linkedin.display();
    
    return 0;
}























