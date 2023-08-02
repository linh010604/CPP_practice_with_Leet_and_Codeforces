class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int a = -pow(2,31);

        for(int  i = 0 ; i < nums.size() ; i++) {
            a = max(nums[i],a);
        }
        
        for(int  i = 0 ; i < nums.size() ; i++) {
            if (nums[i] == a) 
                return i;
        }   

        return 0 ;
    }
};
