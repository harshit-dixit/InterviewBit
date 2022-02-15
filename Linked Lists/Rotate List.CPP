/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int k) {
    if(A==NULL||A->next==NULL||k==0)    return A;
    int len=1;
    ListNode *a=A;
    while(a->next!=NULL)
    {
        a=a->next;
        len++;
    }
    k=k%len;
    a->next=A;
    k=len-k;
    while(k>0)
    {
        a=a->next;
        k--;
    }
    A=a->next;
    a->next=NULL;
    return A;
}




// Since n may be a large number compared to the length of list. So we need to know the length of linked list. After that, move the list after the (l-n % l )th node to the front to finish the rotation.

// Ex: {1,2,3} k = 2 Move the list after the 1st node to the front

// Ex: {1,2,3} k = 5, In this case Move the list after (3-5 % 3=1)st node to the front.

// So the code has three parts.

// 1) Get the length

// 2) Move to the (l-n%l)th node

// 3) Do the rotation
