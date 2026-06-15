class Solution {
   public:
    ListNode* reversell(ListNode* head){
          if(head ==NULL || head->next ==NULL){
            return head;
        }
    ListNode* newHead = reversell(head->next);
    ListNode* front = head->next;
     front->next = head;
     head->next = NULL;
     return newHead;

    }
public:
    bool isPalindrome(ListNode* head) {
        if(head ==NULL || head->next ==NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            }
            ListNode* newHead = reversell(slow->next);

            ListNode* first = head;
            ListNode* second = newHead;

            while(second!= NULL ){
                if(first->val != second->val){
                    reversell(newHead);
                    return false;
                }
                first = first->next;
                second = second->next;
            }
            reversell(newHead);
            return true;
            }
};