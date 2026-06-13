/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next == NULL)
        return head;

        ListNode* odd = head;
        ListNode* evenh= head->next;
        ListNode* Evenhead = head->next;
    


        while(Evenhead != NULL && Evenhead->next != NULL){
              odd->next = odd->next->next;
               odd = odd->next;
              Evenhead->next = Evenhead->next->next;
              Evenhead = Evenhead->next;

         }
         odd->next = evenh;
        return head;
    }
};