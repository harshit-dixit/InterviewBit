/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode *pre=NULL;
    while(A!=NULL)
    {
        ListNode *next=A->next;
        A->next=pre;
        pre=A;
        A=next;
    }
    return pre;
}



// class Solution {
//     public:
     
//         // Reverses the linkedList which starts from head
//         // Returns the end node which is the head of the reversed list.  
//         ListNode *reverseList(ListNode *head) {
//         if (head == NULL) return head; 
//         ListNode *cur = head, *nextNode, *prevNode;
//         prevNode = NULL;

//         while (cur != NULL) {
//             nextNode = cur->next;
//             cur->next = prevNode;
//             prevNode = cur;
//             cur = nextNode;
//         }

//         head = prevNode;
//         return head;
//         }
//     };
