class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>ans;
        if(m>n){
            return ans;
        }
        vector<int>hash(26,0);
        vector<int>freq(26,0);
        for(int i=0;i<m;i++){
            hash[p[i]-'a']++;
            freq[s[i]-'a']++;
        }
        if(hash==freq){
            ans.push_back(0);
        }
        for(int i=m;i<n;i++){
            freq[s[i]-'a']++;
            freq[s[i-m]-'a']--;
            if(hash==freq){
                ans.push_back(i-m+1);
            }
        }
        return ans;
    }
};
