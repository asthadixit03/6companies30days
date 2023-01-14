class Solution {
public:
    int findIntegers(int nums) {
        int num[32];
        num[0] = 1;
        num[1] = 2;
        for (int i = 2; i < 32; ++i)
            num[i] = num[i-1]+ num[i-2];
        int ans = 0, k = 30, pre_bit = 0;
        
        while (k >= 0) {
            if (nums&(1<<k)) {
                ans += num[k];
                
                if (pre_bit) 
                    return ans;
                pre_bit = 1;
            }
            else
                pre_bit = 0;
            --k;
        }
        return ans+1;
    }
};