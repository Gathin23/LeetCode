
struct ListNode* removeElements(struct ListNode* head, int val)
{
    while (head != NULL && head->val == val)
        head = head->next;
    
    for (struct ListNode *cur = head; cur && cur->next;) {
        if (cur->next->val == val)
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }

    return head;
}