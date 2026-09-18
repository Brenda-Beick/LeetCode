/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* auxiliar = head;

    while(auxiliar && auxiliar->next){
         if(auxiliar->next->val == auxiliar->val){
            auxiliar->next = auxiliar->next->next; 
        }else{
            auxiliar = auxiliar->next;
        }

    }
       

    return head;
}