/*
205. Isomorphic Strings
Easy
7.9K
1.8K
Companies
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.



Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true


Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /*
        if(s.size() != t.size()){
            return false;
        }
        //create two buckets for each string and compare the numbers of each
        //buckets should be the alphabet 26 in array
        vector<int> bucketS = vector(26,0);
        vector<int> bucketT = vector(26,0);
        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case 'a' :
                    bucketS[0] += 1;
                    break;
                case 'b' :
                    bucketS[1] += 1;
                    break;
                case 'c' :
                    bucketS[2] += 1;
                    break;
                case 'd' :
                    bucketS[3] += 1;
                    break;
                case 'e' :
                    bucketS[4] += 1;
                    break;
                case 'f' :
                    bucketS[5] += 1;
                    break;
                case 'g' :
                    bucketS[6] += 1;
                    break;
                case 'h' :
                    bucketS[7] += 1;
                    break;
                case 'i' :
                    bucketS[8] += 1;
                    break;
                case 'j' :
                    bucketS[9] += 1;
                    break;
                case 'k' :
                    bucketS[10] += 1;
                    break;
                case 'l' :
                    bucketS[11] += 1;
                    break;
                case 'm' :
                    bucketS[12] += 1;
                    break;
                case 'n' :
                    bucketS[13] += 1;
                    break;
                case 'o' :
                    bucketS[14] += 1;
                    break;
                case 'p' :
                    bucketS[15] += 1;
                    break;
                case 'q' :
                    bucketS[16] += 1;
                    break;
                case 'r' :
                    bucketS[17] += 1;
                    break;
                case 's' :
                    bucketS[18] += 1;
                    break;
                case 't' :
                    bucketS[19] += 1;
                    break;
                case 'u' :
                    bucketS[20] += 1;
                    break;
                case 'v' :
                    bucketS[21] += 1;
                    break;
                case 'w' :
                    bucketS[22] += 1;
                    break;
                case 'x' :
                    bucketS[23] += 1;
                    break;
                case 'y' :
                    bucketS[24] += 1;
                    break;
                case 'z' :
                    bucketS[25] += 1;
                    break;
            }
            switch(t[i]){
                case 'a' :
                    bucketT[0] += 1;
                    break;
                case 'b' :
                    bucketT[1] += 1;
                    break;
                case 'c' :
                    bucketT[2] += 1;
                    break;
                case 'd' :
                    bucketT[3] += 1;
                    break;
                case 'e' :
                    bucketT[4] += 1;
                    break;
                case 'f' :
                    bucketT[5] += 1;
                    break;
                case 'g' :
                    bucketT[6] += 1;
                    break;
                case 'h' :
                    bucketT[7] += 1;
                    break;
                case 'i' :
                    bucketT[8] += 1;
                    break;
                case 'j' :
                    bucketT[9] += 1;
                    break;
                case 'k' :
                    bucketT[10] += 1;
                    break;
                case 'l' :
                    bucketT[11] += 1;
                    break;
                case 'm' :
                    bucketT[12] += 1;
                    break;
                case 'n' :
                    bucketT[13] += 1;
                    break;
                case 'o' :
                    bucketT[14] += 1;
                    break;
                case 'p' :
                    bucketT[15] += 1;
                    break;
                case 'q' :
                    bucketT[16] += 1;
                    break;
                case 'r' :
                    bucketT[17] += 1;
                    break;
                case 's' :
                    bucketT[18] += 1;
                    break;
                case 't' :
                    bucketT[19] += 1;
                    break;
                case 'u' :
                    bucketT[20] += 1;
                    break;
                case 'v' :
                    bucketT[21] += 1;
                    break;
                case 'w' :
                    bucketT[22] += 1;
                    break;
                case 'x' :
                    bucketT[23] += 1;
                    break;
                case 'y' :
                    bucketT[24] += 1;
                    break;
                case 'z' :
                    bucketT[25] += 1;
                    break;
            }
        }
        sort(bucketS.begin(), bucketS.end());
        sort(bucketT.begin(), bucketT.end());
        for(int i = 0; i < bucketS.size(); i++){
            cout << bucketS[i] << " " << bucketT[i] << endl;
            if(bucketS[i] != bucketT[i]){
                return false;
            }
        }
        return true;
        */
         // Use hashmaps to save the replacement for every character in the first string...
        unordered_map <char , char> rep;
        unordered_map <char , bool> used;
        // Traverse all elements through the loop...
        for(int idx = 0 ; idx < s.length() ; idx++) {
            // If rep contains s[idx] as a key...
            if(rep.count(s[idx])) {
                // Check if the rep is same as the character in the other string...
                // If not, the strings can’t be isomorphic. So, return false...
                if(rep[s[idx]] != t[idx])
                    return false;
            }
            // If no replacement found for first character, check if the second character has been used as the replacement for any other character in the first string...
            else {
                if(used[t[idx]])
                    return false;
                // If there exists no character whose replacement is the second character...
                // Assign the second character as the replacement of the first character.
                rep[s[idx]] = t[idx];
                used[t[idx]] = true;
            }
        }
        // Otherwise, the strings are not isomorphic.
        return true;
    }
};
