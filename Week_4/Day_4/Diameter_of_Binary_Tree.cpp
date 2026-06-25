class Solution {
public:

    int height(TreeNode* root, int &maxi){
        if(root==NULL){
            return 0;
        }
        int leftHeight=height(root->left,maxi);
        int rightHeight=height(root->right,maxi);
        maxi=max(maxi,leftHeight+rightHeight);
        return 1+max(leftHeight,rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        height(root,maxi);
        return maxi;
    }
};
