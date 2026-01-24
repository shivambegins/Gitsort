class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // to find those pivot index through which i can change vlaue for next permutation 
        int idx = -1;
        // we will compare from right side
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]) {
                idx = i;
                break;
                }
        }
        // agar pivot nhi mil yani ki index mai change nhi ho rha to reverse karna padega
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
       reverse(nums.begin()+idx+1, nums.end());

       /// swapping kar rha hu pivot index se next ke liye 
       int j = -1;
       for(int i = idx+1;i<n;i++){
        if(nums[i]>nums[idx]){ j = i;
        break;
        }
       }
       swap(nums[idx] , nums[j]);
       return;
    }
};