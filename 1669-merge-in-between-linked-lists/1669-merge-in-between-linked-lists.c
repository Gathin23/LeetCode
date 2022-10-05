/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *ptr1=list1, *ptr2=list1;
    for(int i = 0; i < a-1; i++){
        ptr1 = ptr1->next; 
    }
	
    for(int j = 0; j < b; j++){
        ptr2 = ptr2->next;
    }
    ptr1->next = list2;
    while(ptr1->next != NULL){
        ptr1 = ptr1->next;
    }
    ptr1->next = ptr2->next;
    return list1;
}