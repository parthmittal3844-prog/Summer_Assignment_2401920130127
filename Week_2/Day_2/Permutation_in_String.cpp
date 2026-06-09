class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(m>n){
            return false;
        }
       
       vector<int> hash(26, 0);
       vector<int> freq(26, 0);
        for(int i=0;i<m;i++){
            hash[s1[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq[s2[i]-'a']++;
        }
        if(hash==freq){
            return true;
        }
        for(int i=m;i<n;i++){
            freq[s2[i]-'a']++;
            freq[s2[i-m]-'a']--;
            if(hash==freq){
                return true;
            }
        }
        return false;
    }
};
