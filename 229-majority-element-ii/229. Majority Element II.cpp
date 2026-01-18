class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n = v.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        int mm = (int)(n/3) + 1;
        for(int i = 0;i<n;i++){
            mpp[v[i]]++;
        if(mpp[v[i]] == mm) ans.push_back(v[i]);
        if(ans.size() == 2) break;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};