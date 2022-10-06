/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapNodes(struct ListNode* head, int k){
    struct ListNode *p=head,*q=head,*r=head;
    for(int i=1;i<k;i++){
        q=q->next;
        r=r->next;
    }
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    int temp = r->val;
    r->val = p->val;
    p->val = temp;
    return head;
}