class Solution {
public:

    vector<int> findNse(vector<int>heights){
        int n=heights.size();
        vector<int>nse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
               nse[i]=n;
            }
            else{
                nse[i]=st.top();
            }
            st.push(i);
        }
        return nse;
    }

    vector<int> findPse(vector<int>heights){
        int n=heights.size();
        stack<int>st;
        vector<int>pse(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
               pse[i]=-1;
            }
            else{
                pse[i]=st.top();
            }
            st.push(i);
        }
        return pse;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nse(n);
        vector<int>pse(n);
        int maxi=0;
        nse=findNse(heights);
        pse=findPse(heights);

        for(int i=0;i<n;i++){
            maxi=max(maxi,heights[i]*(nse[i]-pse[i]-1));
        }
        return maxi;
    }
};
