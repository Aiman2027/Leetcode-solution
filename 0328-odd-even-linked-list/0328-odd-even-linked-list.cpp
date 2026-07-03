class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next ==NULL)return head;
        ListNode* oddnode = head;
        ListNode* evennode = head->next;
         ListNode* even = head->next;


        while(evennode != NULL && evennode->next != NULL ){
            oddnode->next = oddnode->next->next;
            oddnode = oddnode->next;
            evennode->next = evennode->next->next;
            evennode = evennode->next;
            }
            oddnode->next = even;
            return head;
            }
};