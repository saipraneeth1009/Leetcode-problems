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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> check;
        for(auto num:nums) check.insert(num);
        ListNode * ans=new ListNode(0);
        ans->next=nullptr;
        ListNode *dummy=ans;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(check.find(temp->val)==check.end()){
                dummy->next = new ListNode(temp->val);
                dummy=dummy->next;
                dummy->next=nullptr;
            }
            temp=temp->next;
        }

        return ans->next;
    }
};