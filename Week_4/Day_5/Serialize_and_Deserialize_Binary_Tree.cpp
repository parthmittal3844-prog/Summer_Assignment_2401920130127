class Codec {
public:

    void preorder(TreeNode* root, string &s){
        if(root==NULL){
            s+="#,";
            return;
        }
        s+=to_string(root->val)+",";
        preorder(root->left,s);
        preorder(root->right,s);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
        preorder(root,s);
        return s;
    }

    TreeNode* tree(stringstream &s){
        string str;
        getline(s,str,',');
        if(str=="#"){
            return NULL;
        }
        TreeNode* root=new TreeNode(stoi(str));
        root->left=tree(s);
        root->right=tree(s);
        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream s(data);
        return tree(s);
    }
};
