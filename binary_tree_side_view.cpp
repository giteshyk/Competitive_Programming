class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> nodes;
        recursion(root,1,nodes);  
        return nodes;
    }
    
private:
    void recursion(TreeNode* root,int level,vector<int> &nodes){
        if(!root)
            return;
        
        if(nodes.size() < level)
            nodes.push_back(root->val);
        
        recursion(root->right,level+1,nodes);
        recursion(root->left,level+1,nodes);
        
        return;
    }
};
