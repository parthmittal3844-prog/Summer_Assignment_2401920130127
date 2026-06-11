class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = 0;

        while(i < n) {
             string word = "";

            while(i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            ans += word;
            if(s[i] == ' ') {
                ans += ' ';
                i++;
               
            }
        }
        return ans;
    }
};
