class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        int cnt =0;
        
        if(head == NULL || head->next ==NULL){
            return NULL;
        }
        ListNode*  temp = head;
        ListNode*  pre = NULL;
        while(temp){
            cnt ++;
            temp = temp ->next;
        }
         int mid = cnt/2;
         temp = head;
         
         
         for(int i =0 ;i < mid; i++){
                pre = temp;
                temp = temp ->next;}

            pre ->next = temp-> next;
            delete temp;
            return head;
}
};