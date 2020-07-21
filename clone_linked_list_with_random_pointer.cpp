class Solution {
public:
    unordered_map<Node*,Node*> map;
    Node* copyRandomList(Node* head) {
        
        if(!head) return NULL;
        if(map[head]!=NULL) return map[head];
        
        map[head] = new Node(head->val);
        map[head]->next = copyRandomList(head -> next);
        map[head]->random = copyRandomList(head->random);
        
        return map[head];
    }
};
