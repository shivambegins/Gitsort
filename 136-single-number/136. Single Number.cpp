class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end()); // Sort the array
        // for (int i = 1; i < nums.size(); i += 2) {
        //      if (i + 1 == nums.size() || nums[i] != nums[i + 1]) {
        //          return nums[i]; // Return the single number 
        //         }
        // }
             
        // return -1;
         
         int res = 0;
         for(int i = 0;i<nums.size();i++){
            res = res^nums[i];
         }
         return res;

    }
};