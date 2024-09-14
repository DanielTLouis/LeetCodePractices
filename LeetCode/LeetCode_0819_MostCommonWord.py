"""
819. Most Common Word
Solved
Easy
Topics
Companies
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.

 

Example 1:

Input: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]
Output: "ball"
Explanation: 
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.
Example 2:

Input: paragraph = "a.", banned = []
Output: "a"
"""
class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        bucket = dict()
        word = ""
        for i in range(len(paragraph)):
            if(i+1 == len(paragraph) and paragraph[i].isalpha()):
                word += paragraph[i].lower()
            if(paragraph[i] != ' ' and paragraph[i].isalpha() and i+1 != len(paragraph)):
                word += paragraph[i].lower()
            elif(word != ""):
                if(word in bucket):
                    bucket[word] += 1
                else:
                    bucket[word] = 1
                word = ""
        largest = 0
        word = ""
        for key in bucket:
            print(key + " : " + str(bucket[key])) 
            if(key not in banned and largest < bucket[key]):
                largest = bucket[key]
                word = key
        return word




