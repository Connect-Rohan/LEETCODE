class Solution {
public:
    int majorityElement(vector<int>& nums) {




        for( int i = 0 ; i < nums.size() ; i++ )
        {
            int f = 0;
            for (int j =0 ; j<nums.size() ; j++)
            {
                if(nums[i] == nums[j])
                {
                    f++;


                }
            }
            if(f > nums.size()/2)
            {
                return nums[i];
            }

        }
        return 0;

        
    }
};