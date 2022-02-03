/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *a=A;
    ListNode *b=A;
    while(b!=NULL)
    {
        if(b->val==0)
        {
            swap(b->val,a->val);
            a=a->next;
        }
        b=b->next;
    }
    return A;
}




// Following steps can be used to sort the given linked list:

//     Traverse the list and count the number of 0s, 1s. Let the counts be n1, n2 respectively.
//     Traverse the list again, fill the first n1 nodes with 0, then n2 nodes with 1.

// Time Complexity: O(N) where N is number of nodes in linked list.
// Auxiliary Space: O(1)

// The above solution does not work when these values have associated data with them.
// For example, these two represent two colors and different types of objects associated with the colors and we want to sort objects (connected with a linked list) based on colors.

// So, A new solution is discussed that works by changing links.

// Iterate through the linked list. Maintain 2 pointers named zero and one to point to current ending nodes of linked lists containing 0 and 1 respectively.
// For every traversed node, we attach it to the end of its corresponding list.
// Finally we link both the lists.
// To avoid many null checks, we use two dummy pointers zeroD and oneD that work as dummy headers of the two lists.

// Time Complexity: O(N) where N is number of nodes in linked list.
// Auxiliary Space: O(1)
