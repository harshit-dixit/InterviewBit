ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    if(A==NULL||B==NULL)    return NULL;
    ListNode *a=A;
    ListNode *b=B;
    while(a!=b)
    {
        a=a==NULL?B:a->next;
        b=b==NULL?A:b->next;
    }
    return a;
}


// int getLength (ListNode *node){
//      int count = 0;
//      while(node){
//          count+=1;
//          node=node->next;
//      }
//      return count;
//  }
// ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     int lenthA = getLength(A);
//     int lenthB = getLength(B);
//     if(lenthA-lenthB > 0){
//         int diff = lenthA-lenthB;
//         while(diff--){
//             A=A->next;
//         }
//     } else{
//         int diff = lenthB-lenthA;
//         while(diff--){
//             B=B->next;
//         }
//     }
//     while(A && B) {
//         if(A == B)
//           return A;
//           A=A->next;
//           B=B->next;
//     }
//     return NULL;
// }
