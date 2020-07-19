class Solution {
public:
    node* reverseList(node* curr) {
        node *next_node = NULL , *prev = NULL;
        
        while(curr){
            next_node = cur -> next ;
            cur -> next = prev ;
            prev = cur ;
            cur = next_node;
        }
        return prev;                            //This will be the new HEAD
    }
};
