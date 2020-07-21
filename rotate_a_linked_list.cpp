class Solution {
  public:
    node* rotate_list(node* head,int k) {                                   //Rotate by k positions
        if(head == NULL || head-> next == NULL)
            return head;
            
         int len = 1;
         node* tail = head;
         
         while(tail->next){
            tail = tail -> next;
            len += 1;
         }
    
          k = k % len;
          tail -> next = head;
          
          for(int i=0 ; i < len - k ; i++){
            tail = tail -> next;
          }
          
          head = tail->next;
          tail->next = NULL;
          
          return head;
    }   
};
