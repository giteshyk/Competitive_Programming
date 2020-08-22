class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        
        max_diam(root,d);
        
        return d;
    }
private:
    int max_diam(TreeNode* root, int &d){
        if(!root)
            return 0;
        
        int ld = max_diam(root->left,d);
        int rd = max_diam(root->right,d);
        
        d = max(d,ld+rd);
        
        return max(ld,rd) + 1;
    }
};
