class Solution {
    public :
        bool isThereaCycle(node* head) {
            node* slow = head;
            node* fast = head;
            
            if(head == NULL || head -> next == NULL) {
                return false;
            }
        
            while(fast->next && fast->next->next){
                slow = slow -> next ;
                fast = fast -> next ;
                
                if(fast == slow){
                    return true;
                }
            }
            return false;
        }
};
