class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
     {
        ListNode* temp = head;
        
        while (temp != nullptr && temp->next != nullptr)
         {
            if (temp->val == temp->next->val)
             {
                ListNode* dup = temp->next;
                temp->next = temp->next->next; 
                delete dup;
            } else {
                temp = temp->next;
            }
        }
        
        return head;
    }
};