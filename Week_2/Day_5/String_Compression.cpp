class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int index=0;
        while(i<n){
            char c=chars[i];
            int cnt=0;
            while(i<n && chars[i]==c){
                cnt++;
                i++;
            }
            chars[index]=c;
            index++;
            if(cnt>1){
                string num=to_string(cnt);
                for(char n: num){
                    chars[index]=n;
                    index++;
                }
            }
        }
        return index;
    }
};
