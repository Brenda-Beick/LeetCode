/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* i;
    int count = 0;

    for(i = head;i != NULL; i = i->next)
    count++;

    count = count/2 + 1;

    while(count > 1){
        head = head->next;
        count--;
    }
   return head; 
}