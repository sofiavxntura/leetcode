# Solução brute force. Complexidade O(n²) de tempo, passa por 2 loop for. Espaço constante, então complex. O(1)

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        size = len(nums)
        for i in range(size):
            for j in range(i+1, size):
                if nums[i] + nums[j] == target: return [i, j]
        return [] # lista vazia se não for encontrado


# ===================================================================
# **Solução sugerida**: hash map com complexidade O(n) de tempo.
# class Solution:
#    def twoSum(self, nums: List[int], target: int) -> List[int]:
#        hashmap = {}
#        for i in range(len(nums)):
#            hashmap[nums[i]] = i
#        for i in range(len(nums)):
#            complement = target - nums[i]
#            if complement in hashmap and hashmap[complement] != i:
#                return [i, hashmap[complement]]
#        return []
