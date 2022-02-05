ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;
    if(A->val>B->val)   swap(A,B);
    ListNode *res=A;
    while(A!=NULL&&B!=NULL)
    {
        ListNode *temp=NULL;
        while(A!=NULL&&A->val<=B->val)
        {
            temp=A;
            A=A->next;
        }
        temp->next=B;
        swap(A,B);
    }
    return res;
}



// First thing to note is that all you would want to do is modify the next pointers. You don’t need to create new nodes.

// At every step, you choose the minumum of the current head X on the 2 lists, and modify your answer’s next pointer to X. You move the current pointer on the said list and the current answer.

// Corner case,
// Make sure that at the end of the loop, when one of the list goes empty, you do include remaining elemnts from the second list into your answer.

// Test case : 1->2->3 4->5->6
