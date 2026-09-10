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
    vector<vector<int>> vals;

    vector<vector<int>> levelOrder(TreeNode* root) {
        levels(root, 0);
        return vals;
    }

    void levels(TreeNode* root, int level) {
        if (root == nullptr) {
            return;
        }

        if (vals.size() == level) {
            vals.push_back(vector<int>());
        }

        vals[level].push_back(root->val);
        
        levels(root->left, level+1);
        levels(root->right, level+1);
    }
};
