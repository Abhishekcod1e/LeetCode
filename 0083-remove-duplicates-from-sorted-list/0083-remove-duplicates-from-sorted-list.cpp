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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || head->next==nullptr) return head;
        ListNode * ptr1=head;
        ListNode * ptr2=head->next;
        while(ptr2!=nullptr){
            if(ptr1->val!=ptr2->val){
                ptr1->next=ptr2;
                ptr1=ptr1->next;
            }
            ptr2=ptr2->next;
        }
        ptr1->next=nullptr;
        return head;
        
    }
};