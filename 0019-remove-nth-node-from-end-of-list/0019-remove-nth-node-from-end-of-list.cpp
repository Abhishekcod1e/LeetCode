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
        if(!head) return 0;
        if(head->next==nullptr && n>0) return 0;
        else if(head->next==nullptr && n==0) return head;
        ListNode * temp=head;
        ListNode * temp1=head;
        int i=1;
        int count=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            count++;
        }
        temp=head;
        int j=1;
        if(n==count) return head->next;
        while(j<count-n){
            temp1=temp1->next;
            j++;
        }
        while(i<count-n+1) {
            temp=temp->next;
            i++;
            }
        temp1->next=temp->next;
        return head;
        
    }
};