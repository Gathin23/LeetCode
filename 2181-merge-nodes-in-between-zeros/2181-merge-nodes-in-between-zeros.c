/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeNodes(struct ListNode* head){
    struct ListNode* temp=head->next;
    struct ListNode* temp2=head;
    while(temp->next!=NULL){
        if(temp->val!=0){
            temp2->val+=temp->val;
            
        }
        else{
            temp2->next=temp;
            temp2=temp;
            
        }
        temp=temp->next;
    }
    free(temp);
    temp2->next=NULL;
    return head;
    

}
