#Given a string s, find the length of the longest 
#substring
 #without repeating characters.

 

#Example 1:

#Input: s = "abcabcbb"
#Output: 3
#Explanation: The answer is "abc", with the length of 3.
#Example 2:

#Input: s = "bbbbb"
#Output: 1
#Explanation: The answer is "b", with the length of 1.


  class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        char_index = {}
        max_length = 0
        start = 0

        for end in range(len(s)):
            
            if s[end] in char_index and char_index[s[end]] >= start:
                start = char_index[s[end]] + 1

            char_index[s[end]] = end
            max_length = max(max_length, end - start + 1)

            
        
        return max_length


input_str = "abcabcbb"
solution = Solution()
result = solution.lengthOfLongestSubstring(input_str)
print(result)
