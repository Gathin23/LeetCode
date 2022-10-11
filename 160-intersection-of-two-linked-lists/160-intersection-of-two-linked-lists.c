/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* p1 = headA;
    struct ListNode* p2 = headB;
    
    if(p1 == NULL || p2 == NULL)
        return NULL;
    if(p1 == p2)
        return p1;
    
    while(p1 != p2){
        if(p1 == NULL)
            p1 = headB;
        else
            p1 = p1->next;
        if(p2 == NULL)
            p2 = headA;
        else
            p2 = p2->next;
    }
    
    return p1;
}