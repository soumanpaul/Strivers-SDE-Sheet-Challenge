class Solution {
    int height=0;
public:
    void maximum_depth(TreeNode *root, int depth){
         if (!root) return;
        if(!root->left && !root->right){
            height = max(height, depth);
            return;
        }
        maximum_depth(root->left, depth+1);
        maximum_depth(root->right, depth+1);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        maximum_depth(root,1);
        return height;
    }
};