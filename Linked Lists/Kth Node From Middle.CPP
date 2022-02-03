/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode *a=A;
    int x=0,y;
    while(a!=NULL)
    {
        a=a->next;
        x++;
    }
    x=(x/2)-B;
    if(x<0) return -1;
    a=A;
    while(x>=0)
    {
        y=a->val;
        a=a->next;
        x--;
    }
    return y;
}




// Traverse the List from beginning to end and count the total number of nodes.
// Now, suppose N is the total number of nodes in the List. Therefore, the middle node will be at the position (N/2)+1.
// Now, the task remains to print the node at (N/2 + 1 – k)th position from the head of the List.
// Algorithm:
// (1) Initialize count = 0
// (2) Loop through the link list
// (2.1) if count is equal to the passed index(i.e N/2 + 1 -k) then return current node
// (2.2) Increment count
// (2.3) Change current to point to next of the current.

// Time Complexity: O(N), where N is the length of the list.
// Auxiliary Space: O(1)
