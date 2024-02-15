class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word=""
        i=0
        j=0
        for k in range(len(word1)+len(word2)):
            if (k%2==0 and i<len(word1)) or (j>=len(word2)):
                word=word+word1[i]
                i=i+1
            elif (k%2!=0 and j<len(word2)) or (i>=len(word1)):
                word=word+word2[j]
                j=j+1
        return word
        