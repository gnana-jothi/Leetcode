class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()) {
            TreeNode* root = s.top(); 
            result.push_back(root->val);
            s.pop();
            if (root->right)
                s.push(root->right); 
            if (root->left)
                s.push(root->left); 
        }
         return result;
    }
};