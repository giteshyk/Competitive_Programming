ListNode *reverse_list(node *head){
    if( head == NULL || head -> next == NULL )
        return head;
        
    node* p = reverse_list(head->next);
    head -> next -> next = head;
    head -> next = NULL;
    
  return p;
}

class Solution {
public:
    bool isPalindrome(node* head) {
    node *slow = head ,*fast = head;
    
    if(head == NULL || head->next == NULL)
        return true;
        
    while(fast  && fast -> next ){
            slow = slow -> next;
            fast = fast -> next -> next;
        } 
        
     slow = reverse_list(slow);
    
     while(slow){
        if(slow->value != head->value)
            return false;
         
         slow = slow->next;
         head = head->next;
      }
      return true;
    }
};
