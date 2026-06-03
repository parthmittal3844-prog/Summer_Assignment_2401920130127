class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int l=0;
        int r=n-1;
        while(l<=r){
            if(abs(nums[l])<=abs(nums[r])){
                ans.push_back(nums[r]);
                r--;
            }
            else{
                ans.push_back(nums[l]);
                l++;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            ans[i]=ans[i]*ans[i];
        }
        return ans;
    }
};
