
class Solution {
    public:
    ListNode* findNthnode(ListNode* head , int k){
        int cnt =1;
        ListNode* temp = head;
        while(temp != NULL){
            if(cnt ==k){
                return temp;
            
            }
            cnt++;
            temp = temp->next;
        }
return temp;

    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        int len = 1;
        ListNode* tail = head;

        while(tail->next != NULL){
            len++;
            tail= tail->next;
        }

        if(k%len == 0) return head;
        k= k%len;
        tail->next = head;
        ListNode* newNode = findNthnode(head , len -k);
        head = newNode->next;
        newNode->next = NULL;
        return head;  
        }
};