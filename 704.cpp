// 704 - Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int tamanho = nums.size();
        int c = 0; int f = tamanho-1;
        int i = 0;
        while (c <= f){
            i = (c+f)/2;
            if (nums[i] == target){
                return i;
            } else if (nums[i] > target){
                f = i-1;
            } else {
                c = i+1;
            }
        }
        return -1;
    }
};
