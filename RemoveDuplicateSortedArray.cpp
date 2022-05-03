class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur =0;
        int next =0;
        while(next!=nums.size()){
             if(nums[next]==nums[cur])
                    next++;
                    
             else{
                    cur++;
                    swap(nums[cur],nums[next++]);
            }
        }
        return cur+1;
        
    }
};
