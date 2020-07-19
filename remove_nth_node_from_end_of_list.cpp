class Solution {
public:
    node* removeNthFromEnd(node* head, int n) {   //n is the nth node form the end that we have to delete 
        node* answer;
        node* fast = head;
        node* slow = head;
        
        for(int i=0;i<n;i++){
        fast = fast -> next;
        }
        
        if(fast==NULL) {                         //This means its the head we are talking about
                asnwer -> next = head;            
                delete head;
        return answer;
        }
      
        while(fast->next != NULL){
                slow = slow -> next ;              //slow give us pointer to the element just behind our desired target
                fast = fast -> next ;
        }
        
        node* to_delete = slow -> next ;           //Delete element next to slow
        
        slow -> next = slow -> next -> next ;
        delete to_delete ;
        
        return head;                              //return the new list
    }
};
