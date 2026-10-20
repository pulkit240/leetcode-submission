/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==nullptr) return head;
       if(head->next==nullptr){
        if(n==1) return nullptr;
       }
       int k=0;
       ListNode *temp1=head;
       while(temp1!=nullptr){
        k++;
        temp1=temp1->next;
       }
       ListNode *temp2=head;
       ListNode *prev=NULL;
       int count =0;
       if(k-n+1==1){
        ListNode*temp3=head;
        head=head->next;
      
        return head;

       }
       while(temp2!=nullptr){
        count++;
        if(count==k-n+1){
            prev->next=temp2->next;
           
            break;
        }
        prev=temp2;
        temp2=temp2->next;

       }
       return head;


    }
};