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
    ListNode* reverseList(ListNode* head) {
        if(!head) return 0;
        if(head->next==nullptr) return head;
        vector<int> nums;
        ListNode * temp=head;
        ListNode * list=new ListNode();
        ListNode * newtemp=list;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int i=nums.size()-1;
        while(i>=0){
            newtemp->next=new ListNode(nums[i]);
            i--;
            if(i==-1){
                 newtemp->next->next=nullptr;
                 break;
            }
            newtemp=newtemp->next;
            
        }
        return list->next;
            
        }

};