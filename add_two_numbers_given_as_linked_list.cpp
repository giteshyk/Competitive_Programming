//Definition for singly-linked list
struct node {
	int value;
	node* next;
	node() : value(0) , next(nullptr){}
	node(int x) : value(x) , next(nullptr){}
	node(int x,node *next) : value(x) , next(next){}    
}

class Solution {
  public:
    node* add_two_numbers(node* l1,node* l2) {
    	node pre_head(0);
	node* p = &pre_head;
	int carry = 0:
	
	while(l1 || l2 || carry){
		int sum = (l1?l1->value:0) + (l2?l2->value:0) + carry;
		carry = (sum/10);
		p -> next = new node(sum % 10);
		p = p -> next;
		l1 = l1?l1->next:l1;                                    //as you may enter the loop even if l1 or l2 is empty , thats why we need this line
		l2 = l2?l2->next:l2; 
	}
	return pre_head.next;
    }
};
