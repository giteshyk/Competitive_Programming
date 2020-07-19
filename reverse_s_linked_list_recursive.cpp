class Solution {
public:
    node* reverseList(node* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        node* p = reverseList(head -> next);
        head -> next -> next = head ;
        head -> next = NULL ;
        
        return p;                                    //This will be the new HEAD 
    }
};
