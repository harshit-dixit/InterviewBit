/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL) return NULL;
    
    ListNode *d = new ListNode(0);
    d->next=A;
    ListNode *s =d;
    ListNode *f=d;
    for(int i=1;i<=B;i++)
    {
        f=f->next;
        if(f==NULL) return A->next;
    }
    while(f->next!=NULL)
    {
        s=s->next;
        f=f->next;
    }
    s->next=s->next->next;
    return d->next;
}


// Obviously, since we do not have back pointers, reaching the end node and then making our way back is not an option.

// There are 2 approaches :
// 1) Find out the length of the list in one go. Then you know the number of node to be removed. Traverse to the node and remove it.
// 2) Make the first pointer go n nodes. Then move the second and first pointer simultaneously. This way, the first pointer is always ahead of the second pointer by n nodes. So when first pointer reaches the end, you are on the node to be removed.
