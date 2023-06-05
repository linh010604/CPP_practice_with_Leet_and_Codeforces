class Solution {
public:
    int jump(vector<int>& nums) {
        int d[10100] , n = nums.size() ;
        for (int i = 0 ; i < n ; i++) d[i] = 1010000 ;
        d[0] = 0 ;

        for (int i = 0 ; i < n ; i++) {
            for (int j = 1 ; j <= nums[i] ; j++) {
                if ( i + j < n ) d[i+j] = min(d[i+j] , d[i] + 1) ;
            }
        }

        return d[n-1] ;

    }
};
