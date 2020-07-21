class Solution {
    public:
        node* detectCycle(node* head){
            
            if(head == NULL || head -> next == NULL)
                return NULL;
            
            node* slow = head;
            node* fast = head;
            bool iscycle = false;
            
            while(slow != NULL && fast != NULL) {
                if(fast -> next == NULL)
                    return NULL;
                slow = slow -> next;
                fast = fast -> next -> next;
                
                if(slow == fast){
                    iscycle = true;
                    break;
                }
            }
            
            if(!iscycle){
                return NULL;
            }
            
            slow = head ;
            
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
            return slow;
        }
};
