/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* numbers = malloc(sizeof(struct ListNode));
    numbers->val = 0;
    numbers->next = NULL;
    struct ListNode* curr = numbers;
    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry != 0){
        int sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        carry = sum/10;
        curr->next = malloc(sizeof(struct ListNode));
        curr->next->val = sum % 10;
        curr->next->next = NULL;
        curr = curr->next;
        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;
    }

    struct ListNode* result = numbers->next;
    free(numbers);
    
    return result;
}