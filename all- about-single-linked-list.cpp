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
    if(head == NULL) return NULL;

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* deletetail(Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
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

Node* deletek(Node* head, int k){

    if(head == NULL || k <= 0)
        return head;

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
            return head;
        }

        pre = temp;
        temp = temp->next;
        cnt++;
    }

    return head; 
}

Node* Inserhead(Node* head, int val){

    Node* temp = new Node(val);
    temp->next = head;

    return temp;
}

Node* Insertail(Node* head, int val){

    Node* temp = new Node(val);

    if(head == NULL)
        return temp;

    Node* tail = head;

    while(tail->next != NULL){
        tail = tail->next;
    }

    tail->next = temp;

    return head;
}

Node* Insertkthposition(Node* head, int k, int val){

    if(k <= 0)
        return head;

    if(k == 1){
        Node* value = new Node(val);
        value->next = head;
        return value;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < k - 1){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL)
        return head; 

    Node* value = new Node(val);

    value->next = temp->next;
    temp->next = value;

    return head;
}

Node* convertarray(vector<int>& arr){

    if(arr.size() == 0)
        return NULL;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){

        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head){

    Node* temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    vector<int> arr = {3,6,8,9,0};

    Node* head = convertarray(arr);
    print(head);

    head = Inserhead(head, 10);
    print(head);

    head = Insertail(head, 90);
    print(head);

    head = Insertkthposition(head, 3, 100);
    print(head);

    head = deletehead(head);
    print(head);

    head = deletetail(head);
    print(head);

    head = deletek(head, 2);
    print(head);

    return 0;
}
