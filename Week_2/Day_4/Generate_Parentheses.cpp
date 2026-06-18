class Solution {
public:

     vector<string>ans;

    void create(string s, int open, int close, int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            create(s+"(",open+1,close,n);
        }
        if(close<open){
            create(s+")",open,close+1,n);
        }
    }

    vector<string> generateParenthesis(int n) {
       create("",0,0,n);
       return ans;
    }
};
