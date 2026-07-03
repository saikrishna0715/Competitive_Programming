class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int high = 1;
        int low = 0;
        while(high < nums.size()){
            if(nums[high] != nums[high-1]){
                nums[low+1] = nums[high];
                low++;
            }
            high++;
        }
        return low+1;
    }
};