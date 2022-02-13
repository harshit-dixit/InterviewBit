/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;
    int x=0,m=0;
    ListNode *a=A;
    ListNode *b=B;
    ListNode *n=new ListNode(0);
    ListNode *temp=n;
    while(a!=NULL&&b!=NULL)
    {
        x=(a->val)+(b->val)+m;
        ListNode *t= new ListNode(x%10);
        m=x/10;
        n->next=t;
        n=t;
        a=a->next;
        b=b->next;
    }
    if(a==NULL)
    {
        while(b!=NULL)
        {
            x=(b->val)+m;
            ListNode *t= new ListNode(x%10);
            m=x/10;
            n->next=t;
            n=t;
            b=b->next;
        }
    }
    if(b==NULL)
    {
        while(a!=NULL)
        {
            x=(a->val)+m;
            ListNode *t= new ListNode(x%10);
            m=x/10;
            n->next=t;
            n=t;
            a=a->next;
        }
    }
    if(m!=0)
    {
        ListNode *t= new ListNode(m);
        n->next=t;
        n=t;
    }
    
    return temp->next;
}
