class Solution {
public:
    node* middleNode(node* head) {
        node *slow = head , *fast = head;
        
        if(head == NULL || head->next==NULL)
            return head;
            
        while(fast && fast -> next){          //here while(fast -> next && fast -> next -> next) will return middle element if odd length but first one from 
            slow = slow -> next;              //two middle elements if length is even
            fast = fast ->next ->next;
        }
        
        return slow;          //Middle of the linked list if the length is odd and 2nd one from the two middle elements if the list is even size
    }
};
