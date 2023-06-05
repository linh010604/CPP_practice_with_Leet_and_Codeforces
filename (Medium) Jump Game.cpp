class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() , res = 0;
   
        if (n == 1) return true ;
        if (nums[0] == 0) return false ;

        for (int i = 0 ; i < n ; i++) {
            if (nums[i] == 0 && res == i && i < n - 1) return false ;
            res = max(min(i+nums[i] , n-1),res) ;
        }
        return true ;
    }
};
