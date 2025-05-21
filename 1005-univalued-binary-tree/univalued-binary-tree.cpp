class Solution {
public:
    bool solve(TreeNode* &root, int &val)
     {
        if (!root) return true;

        return solve(root->left, val) && solve(root->right, val) && (root->val == val);
    }
 bool isUnivalTree(TreeNode* &root)
  {
        int val = root->val;
        return solve(root, val);
    }
};