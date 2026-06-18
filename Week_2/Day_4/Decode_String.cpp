class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<int>num;
        stack<string>strs;
        string result="";
        int k=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                k=k*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                num.push(k);
                strs.push(result);
                k=0;
                result="";
            }
            else if(s[i]==']'){
                string a=strs.top();
                int b=num.top();
                strs.pop();
                num.pop();
                string temp="";
                for(int j=0;j<b;j++){
                    temp+=result;
                }
                result=a+temp;
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
};
