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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> smol;

        getElements(root, smol);

        return smol[k-1]; // since in-order traversal gives out the values in ascending order, we can fetch the kth value easily.
    }

    // level-order traversal
    void getElements(TreeNode* root, vector<int> &smol) {
        if (root == nullptr) {
            return;
        }

        // visit left subtree
        getElements(root->left, smol);

        // visit root
        smol.push_back(root->val);

        // visit right subtree
        getElements(root->right, smol);
    }
};
