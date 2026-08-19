//35 - Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int c = 0;
        int f = nums.size() - 1;

        while (c <= f){
            int i = (c+f)/2;
            if (nums[i] == target){
                return i;
            } else if(nums[i] > target){
                f = f-1;
            } else{
                c = c+1;
            }
        
        }
        return c;
    }
};
