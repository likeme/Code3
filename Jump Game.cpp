public:
    bool canJump(vector& nums)
    {
        if(nums.size() == 1)
            return (true);
        if(nums[0] == 0)
            return (false);
        int zero = -1;
        
        for (int i = nums.size() - 1;i>=0;i--)
        {
            if (nums[i] == 0 && zero == -1)
                zero = i;
            else if (nums[i] > zero - i)
                zero = -1;
            else if (nums[i] == zero - i && zero == nums.size() - 1)
                zero = -1;    
        }
        if(zero == -1)
            return (true);
        return (false);
    }
};
