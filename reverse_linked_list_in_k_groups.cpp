/**
 * Definition for singly-linked list.
 * struct node {
 *     int val;
 *     node *next;
 *     node() : val(0), next(nullptr) {}
 *     node(int x) : val(x), next(nullptr) {}
 *     node(int x, node *next) : val(x), next(next) {}
 * };
 */
node* reverse_this(node* head , node* last) {
        node* prev = last ;                     // This will point the last element if the reversed list to the point where the rest of the list will start
        node* next_node;
        
        while(head != last) {                   //Very important else this will be an infinite loop ,we do this such that we just reverse the desried element 
                next_node = head -> next;
                head -> next = prev ;
                prev = head ;
                head = next_node ;
                }
        return prev ;                           // first element of our new list
}


class Solution {
public:
        node* reverse_k_group(node* head,int k) {
                node* k_node = head ;
                node* new_head ;
                
                for(int i=0;i<k;i++ ){
                        if(!k_node){
                                return head;
                        }
                        k_node = k_node -> next;
                }
                
                new_head = reverse_this(head,k_node);         //new head
                head -> next = reverse_k_group(k_node ,k);
                
         return new_head;
        }
};
