class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string s1=strs[0];
        string s2=strs[n-1];
        int mini=min(s1.size(),s2.size());
        int ans=0;
        for(int i=0;i<mini;i++){
        if(s1[i]==s2[i]){
            ans++;
        }
        else{
            break;
        }
        }
            return s1.substr(0,ans);
        
    }
};
