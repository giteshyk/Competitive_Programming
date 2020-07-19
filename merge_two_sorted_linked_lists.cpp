class Solution {
public:
    node* mergeTwoLists(node* l1, node* l2) {
    
    if(l1==NULL){
    return l2;
    }
    if(l2===NULL){
    return l1;
    }
    
    node *head = NULL;
    
    if(l1->value < l2->value){
        head = l1;
        l1 = l1 -> next;
    }
    else{
        head = l2;
        l2 = l2 -> next;
    }
    
    node* p = head;
    
    while(l1 && l2){
     if(l1 -> value < l2 -> value){
        p->next = l1;
        l1 = l1 -> next;
     }
     else{
        p->next = l2;
        l2 = l2 -> next;
       }
       p = p->next ;
     }
   if(l1){
        p->next = l1;
    }
   else{
        p->next = l2;
    }
    return head;
   }
};
