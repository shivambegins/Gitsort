class Solution {
public:
   int sumFourDivisors(vector<int>& nums) {
    int totalsum = 0;
    
    for(int num : nums) {
        if(num < 6) continue;
        
        int count = 0;
        int sum = 0;
        for(int j = 1; j * j <= num; j++) {
            if(num % j == 0) {
                count++;
                sum += j;
                
                if(j != num / j) {  
                    count++;
                    sum += (num / j);
                }
                
                if(count > 4) break;
            }
        }
        
        if(count == 4) {
            totalsum += sum;
        }
    }
    
    return totalsum;
}
};