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
    vector<vector<int>> solution;
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, 0);
        return solution;
    }

    void dfs(TreeNode* node, int depth) {
        // if node is a nullptr, skip
        if (!node)
            return;

        // push an empty vector if it's the first time reaching that depth
        if (depth == solution.size()) {
            solution.emplace_back();
        }

        solution[depth].push_back(node->val);

        // recursively call it on left and right child nodes
        dfs(node->left, depth+1);
        dfs(node->right, depth+1);
    }

};
