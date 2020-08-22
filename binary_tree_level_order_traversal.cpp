/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        buildVector(root,result,0);
        
        return result;
    }
private:
    void buildVector(TreeNode* root,vector<vector<int>> &result,int level){
        
        if(!root)
            return;
        
        if(result.size() == level)
            result.push_back(vector<int>());      //increasing the size
        
        result[level].push_back(root -> val);
        buildVector(root->left,result,level+1);
        buildVector(root->right,result,level+1);
    }
};
