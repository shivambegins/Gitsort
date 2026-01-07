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
long long MOD = 1e9 + 7;
long long ans = 0;
long long call(TreeNode* node){
    if(!node) return 0;
    node->val += call(node->left) + call(node->right);
    return node->val;
}
    int maxProduct(TreeNode* root) {
        long long total = call(root);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(!node) continue;
            long long curr = (total - node->val) * node->val;
            ans = max(ans, curr);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        return ans % MOD;
    }
};