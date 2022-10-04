/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverse_ll(struct ListNode *head)
{
    if(head==NULL || head->next==NULL){return head;}
    
    struct ListNode *ptr = head->next;
    struct ListNode *tail = NULL;
    struct ListNode *q = head;
    
    while(ptr){
        q->next = tail;
        tail = q;
        q = ptr;
        ptr = ptr->next;
    }
    
    q->next = tail;
    return q;
}


int pairSum(struct ListNode* head){
    
    int sum = 0;
    
    struct ListNode *fast_ptr = head;
    struct ListNode *slow_ptr = head;
    
	// Use the tortise and hare approach to get the middle element of the LinkedList
    while(fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }
    
	//Reverse from the mid point to the last element of the LinkedList
    fast_ptr = reverse_ll(slow_ptr);
    slow_ptr = head;
    
    while(fast_ptr)
    {
        if((fast_ptr->val + slow_ptr->val) > sum){sum = fast_ptr->val + slow_ptr->val;}  
        fast_ptr = fast_ptr->next;
        slow_ptr = slow_ptr->next;
    }
    
    return sum;
}