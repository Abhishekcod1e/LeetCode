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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        vector<int> arr;
        int i=0;
        ListNode * temp=lists[0];
        while(temp!=nullptr || i+1<lists.size()){
            if(temp!=nullptr){
              arr.push_back(temp->val);
              temp=temp->next;
            }

            if(temp==nullptr &&i+1<lists.size()){
                i++;
                temp=lists[i];
            }
        }
        if(arr.empty()) return nullptr;
        sort(arr.begin(),arr.end());
        i=0;
        ListNode * dummy_newhead=new ListNode(0);
        ListNode * temp1=dummy_newhead;
        while(i<arr.size()){
            temp1->next=new ListNode(arr[i]);
            temp1=temp1->next;
            i++;
        }
        return dummy_newhead->next;
    }
};