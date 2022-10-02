class Solution {
public:
    int utils(vector<int>& nums, int ind){
        if(ind == 0)
            return 0 ;
        int op = INT_MAX ;
        for(int i = 0 ; i < ind ; i++){
            if(i + nums[i] >= ind){
                op = min(op, 1 + utils(nums, i)) ;
            }
        }
        return op ;
    }
    
    int jump(vector<int>& nums) {
        return utils(nums, nums.size()-1) ;
    }
};
