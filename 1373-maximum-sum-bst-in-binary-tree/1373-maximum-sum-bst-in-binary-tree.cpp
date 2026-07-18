class Node {
public:
    int minNode, maxNode, sum;

    Node(int minNode, int maxNode, int sum) {
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->sum = sum;
    }
};

class Solution {
public:
    int ans = 0;
    Node helper(TreeNode* root) {
        if (!root)
            return Node(INT_MAX, INT_MIN, 0);
        Node left = helper(root->left);
        Node right = helper(root->right);
        if (left.maxNode < root->val && root->val < right.minNode) {
            int curr = left.sum + right.sum + root->val;
            ans = max(ans, curr);
            return Node(
                min(root->val, left.minNode),
                max(root->val, right.maxNode),
                curr
            );
        }
        return Node(INT_MIN, INT_MAX, 0);
    }
    int maxSumBST(TreeNode* root) {
        helper(root);
        return ans;
    }
};