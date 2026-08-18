// 167 - Two Sum II - Input Array is Sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int tamanho = numbers.size();
        int i = 0; int j = tamanho-1;
        while (i < j){
            if (numbers[i] + numbers[j] < target){
                i++;
            }
            else if (numbers[i] + numbers[j] > target){
                j--;
            }
            else{ // = target
                return {i+1, j+1};
            }
        }
        return {};
    }
};
