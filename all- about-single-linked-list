#include<bits/stdc++.h>
using namespace std;

class Node{

public:
   int data;
   Node* next;

   Node(int data1){

    data = data1;
    next = nullptr;
   }

};


Node* deletehead(Node* head){
     Node* temp = head;
     head = head->next;
     delete temp;
     return head;
}

Node* deletetail(Node* head){
  if(head == NULL || head->next == NULL){
        delete head;
        return NULL;
    }

     Node* tail = head;
     Node* pre = NULL;

     while(tail->next != NULL){
      pre = tail;
      tail = tail->next;
      

     }
     
     pre->next = NULL;
     delete tail;
     return head;
}


Node* deletek(Node* head , int k){
  if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* pre = NULL;

    int cnt = 1;

    while(temp != NULL){

      if(cnt == k){
       pre->next = temp->next;
        
        delete temp;
        break;
      }
      pre = temp;
      temp = temp-> next;
      cnt++;
    }
 return head;
}

Node* Inserhead(Node* head, int val){

     Node*temp = new Node(val);
     temp->next = head;
     head = temp;

     return head;
}

Node* Insertail(Node* head , int val){

    Node* temp = new Node(val);
    Node* tail = head;

    while(tail->next != NULL){
       
       tail = tail->next;
     } 

     tail->next = temp;
     temp = tail;
     return head;
   }

  Node* Insertkthposition(Node* head , int k, int val){
    if(k == 1){
        Node* value = new Node(val);
        value->next = head;
        return value;
    }

       Node* value = new Node(val);
       int cnt = 0;
       Node* temp = head;
       Node* pre = NULL;

       while(temp != NULL){
  
        if(cnt == k){
           value->next = temp;
           pre->next = value;
           break;
        }
        pre = temp;
        temp = temp->next;
        cnt++;
        }
        return head;
  }


Node* convertarray(vector<int>&arr){

      Node* head = new Node(arr[0]);
      Node* mover = head;

      for(int i =1;i< arr.size();i++){

        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
      }
      return head;
    }


    void print(Node* head){

     Node* temp = head;

     while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
     }
     cout<<endl;
 }


int main(){
  
vector<int> arr = {3,6,8,9,0};

 Node* ans = convertarray(arr);
 Node* New= Inserhead(ans ,10);
 print(New);
 Node*  New2 = Insertail(New ,90);
print(New2);
Node*  New3 = Insertkthposition(New2,3,100);
print(New3);

Node* delh = deletehead(New3);
print(delh);

Node* delt = deletetail(delh);
print(delt);
Node* delk = deletek(delt , 2);
print(delk);


return 0;
}
