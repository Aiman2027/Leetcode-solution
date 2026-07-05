class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val=x;
        next =NULL;
    }
};


class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head =NULL;
    }
    
    int get(int index) {
        Node* temp =head;
        while(temp != NULL && index > 0){
            temp =temp->next;
            index--;}

            if(temp==NULL)return -1;
            return temp->val;
 }
    
    void addAtHead(int val) {
        Node* NEW = new Node(val);
        NEW->next = head;
        head = NEW;
    }
    
    void addAtTail(int val) {
    
        Node * Tail = new Node(val);
        Node * temp = head;
        if(head == NULL){
         head = Tail;
         return;
         }
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = Tail;
}
void addAtIndex(int index, int val) {

    if(index == 0){
        addAtHead(val);
        return;
    }

    Node* NEW = new Node(val);
    Node* temp = head;

    while(temp != NULL && index > 1){
        temp = temp->next;
        index--;
    }

    if(temp == NULL)
        return;

    NEW->next = temp->next;
    temp->next = NEW;
}
    
    
    
void deleteAtIndex(int index) {

    if (head == NULL)
        return;

    if (index == 0) {
        Node* delnode = head;
        head = head->next;
        delete delnode;
        return;
    }

    Node* temp = head;
    Node* pre = NULL;

    while (temp != NULL && index > 0) {
        pre = temp;
        temp = temp->next;
        index--;
    }

    if (temp == NULL)
        return;

    pre->next = temp->next;
    delete temp;
}

};

