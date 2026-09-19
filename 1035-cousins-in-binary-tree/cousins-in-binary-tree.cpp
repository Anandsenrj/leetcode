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
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;

        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            bool foundX = false;
            bool foundY = false;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* curr = q.front();
                q.pop();

                // Check if x and y are siblings (share the same parent)
                if (curr->left && curr->right) {
                    if ((curr->left->val == x && curr->right->val == y) ||
                        (curr->left->val == y && curr->right->val == x)) {
                        return false; // Siblings, not cousins
                    }
                }

                // Process left child
                if (curr->left) {
                    if (curr->left->val == x) foundX = true;
                    if (curr->left->val == y) foundY = true;
                    q.push(curr->left);
                }

                // Process right child
                if (curr->right) {
                    if (curr->right->val == x) foundX = true;
                    if (curr->right->val == y) foundY = true;
                    q.push(curr->right);
                }
            }

            // If both are found at the same level, they are cousins
            if (foundX && foundY) return true;

            // If only one is found, they are at different levels
            if (foundX || foundY) return false;
        }

        return false;
    }
};