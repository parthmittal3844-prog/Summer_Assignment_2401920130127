class Solution {
public:

    TreeNode* Tree(vector<int>& preorder,int preStart,int preEnd, vector<int>& inorder,int inStart,int inEnd, map<int,int>& mp){
        if(preStart>preEnd || inStart>inEnd){
            return NULL;
        }
        TreeNode* root= new TreeNode(preorder[preStart]);
        int ininorder=mp[root->val];
        int numLeft=ininorder-inStart;

        root->left= Tree(preorder,preStart+1,preStart+numLeft,inorder,inStart,ininorder-1,mp);

        root->right= Tree(preorder,preStart+numLeft+1,preEnd,inorder,ininorder+1,inEnd,mp);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode* root= Tree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};
