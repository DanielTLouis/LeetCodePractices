/*
290. Word Pattern
Easy
6.9K
899
Companies
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.



Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false


Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
*/
class Solution {
public:
    // Comparator function to sort pairs
    // according to second value
    static bool cmp(pair<string, int>& a,
            pair<string, int>& b)
    {
        return a.second < b.second;
    }
    // Comparator function to sort pairs
    // according to second value
    static bool cmpChar(pair<char, int>& a,
            pair<char, int>& b)
    {
        return a.second < b.second;
    }
    // Function to sort the map according
    // to value in a (key-value) pairs
    vector<pair<char,int>> sortCharMap(map<char, int> M)
    {

        // Declare vector of pairs
        vector<pair<char, int> > A;

        // Copy key-value pair from Map
        // to vector of pairs
        for (auto& it : M) {
            A.push_back(it);
        }

        // Sort using comparator function
        std::sort(A.begin(), A.end(), cmpChar);
        return A;
    }
    // Function to sort the map according
    // to value in a (key-value) pairs
    vector<pair<string,int>> sortStringMap(map<string, int> M)
    {

        // Declare vector of pairs
        vector<pair<string, int> > A;

        // Copy key-value pair from Map
        // to vector of pairs
        for (auto& it : M) {
            A.push_back(it);
        }

        // Sort using comparator function
        std::sort(A.begin(), A.end(), cmp);
        return A;
    }
    bool wordPattern(string pattern, string s) {
       /*
        map<char, int> map1;
        map<string, int> map2;
        for(int i = 0; i < pattern.size(); i++){
            if(map1.find(pattern[i]) == map1.end()){
                map1[pattern[i]] = 1;
            }
            else{
                map1[pattern[i]] += 1;
            }
        }
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' && map2.find(temp) == map2.end()){
                map2[temp] = 1;
                temp = "";
            }
            else if(s[i] == ' '){
                map2[temp] += 1;
                temp = "";
            }
            else if(i == s.size() -1 && map2.find(temp) == map2.end()){
                map2[temp] = 1;
                temp = "";
            }
            else if(i == s.size() - 1){
                map2[temp] += 1;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        if(map1.size() != map2.size()){
            return false;
        }
        vector<pair<char,int>> vec1 = sortCharMap(map1);
        vector<pair<string,int>> vec2 = sortStringMap(map2);
        for(int i = 0; i < vec1.size(); i++){
            if(vec1[i].second != vec2[i].second){
                return false;
            }
        }
        return true;
        */
        unordered_map<char,string>mp;
        unordered_map<string,int>mo1;
        queue<string> q;
        int j=0;
        string test="";

        //check if chars in pattern and words in string are euqal
        while(j<s.size())
            {
                if(s[j]==' '){
                    q.push(test);
                    test="";
                    j++;
                    continue;
                }
                test+=s[j];
                j++;

            }
        q.push(test);
        if(q.size()!=pattern.size())
            return false;


        for(int i=0;i<pattern.size();i++)
        {
            test = q.front(); q.pop();
            if(mp.find(pattern[i])!=mp.end() )
            {
                if( mp[pattern[i]]==test)
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                mp[pattern[i]]=test;
                mo1[test]++;
            }
        }
        if(mp.size()==mo1.size())
        {
            return true;
        }
        return false;
    }
};
