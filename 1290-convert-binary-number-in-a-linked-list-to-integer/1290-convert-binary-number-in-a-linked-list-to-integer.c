/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct ListNode *ptr,*lptr;
    int n=0,p=-1;
    lptr = head;
    ptr  = head;
    while(lptr != NULL){
        p++;
        lptr = lptr->next;
    }
    while(ptr != NULL){
        n+=(ptr->val)*(pow(2,p));
        p--;
        ptr = ptr->next;
    }
    return n;
    
}