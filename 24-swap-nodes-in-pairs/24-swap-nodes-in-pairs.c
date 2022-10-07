/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *p=head,*q=head;
    int n=1;
    while(p == NULL || p->next == NULL){
        return head;
    }
    while(p->next != NULL){
        p=p->next;
        n++;
    }
    p = head;
    q = q->next;
    int temp = p->val;
    p->val = q->val;
    q->val = temp;
    
    if(n%2 == 0){
    while(q->next != NULL){
        p = p->next->next;
        q = q->next->next;
        temp = p->val;
        p->val = q->val;
        q->val = temp;
    }
    }else {
        while(q->next->next != NULL){
        p = p->next->next;
        q = q->next->next;
        temp = p->val;
        p->val = q->val;
        q->val = temp;
    }
    }
    return head;
}