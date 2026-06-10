class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s;
        int n=t.size();
        string sub=t.substr(1,n-2);
        return sub.find(s)!=-1;
    }
};
