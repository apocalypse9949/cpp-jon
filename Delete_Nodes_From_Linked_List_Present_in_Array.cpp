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
        unordered_set<int> valuestoremove(nums.begin(),nums.end());
        
        while(head != nullptr && valuestoremove.count(
            head->val) > 0)
{
    ListNode* temp = head;
    head = head->next;

}
if(head == nullptr){
    return nullptr;
}
ListNode* current = head;
while(current->next != nullptr){
    if(valuestoremove.count(current->next->val)){
    ListNode* temp = current->next;
    current->next = current->next->next;
    
}else{
    current = current->next;
}
}        
return head;
    }
};
