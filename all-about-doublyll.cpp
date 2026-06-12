#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* deleteHeaddll(Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    head->back = NULL;
    temp->next = NULL;

    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL) return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* prev = temp->back;
    prev->next = NULL;
    temp->back = NULL;

    delete temp;
    return head;
}

Node* deleteKthPosition(Node* head, int k){
    if(head == NULL || k < 0) return head;

    if(k == 0){
        return deleteHeaddll(head);
    }

    Node* temp = head;
    int cnt = 0;

    while(temp != NULL && cnt < k){
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL) return head;

    if(temp->next == NULL){
        return deletetail(head);
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    prev->next = front;
    front->back = prev;

    temp->next = NULL;
    temp->back = NULL;

    delete temp;

    return head;
}

Node* Insertathead(Node* head, int val){
    Node* value = new Node(val);

    if(head == NULL){
        return value;
    }

    value->next = head;
    head->back = value;

    return value;
}

Node* Insertattail(Node* head, int val){
    Node* value = new Node(val);

    if(head == NULL){
        return value;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = value;
    value->back = temp;

    return head;
}

Node* Insertkthpos(Node* head, int k, int val){
    if(k < 0) return head;

    if(k == 0){
        return Insertathead(head, val);
    }

    Node* temp = head;
    Node* prev = NULL;
    int cnt = 0;

    while(temp != NULL && cnt < k){
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    Node* value = new Node(val);

    if(prev == NULL){
        return value;
    }

    value->next = temp;
    value->back = prev;
    prev->next = value;

    if(temp != NULL){
        temp->back = value;
    }

    return head;
}

Node* Coverdarrayto2dll(vector<int>& arr){
    if(arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
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

    Node* head = Coverdarrayto2dll(arr);
    print(head);

    head = Insertathead(head, 4);
    print(head);

    head = Insertattail(head, 100);
    print(head);

    head = Insertkthpos(head, 1, 200);
    print(head);

    head = deleteHeaddll(head);
    print(head);

    head = deletetail(head);
    print(head);

    head = deleteKthPosition(head, 2);
    print(head);

    return 0;
}
