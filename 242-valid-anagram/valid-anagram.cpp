class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i= 0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i=0; i< t.size(); i++){
            mp2[t[i]]++;
        }
        for(int i =0; i<256; i++){
            if(mp1[i]!=mp2[i])
            return false;
        }
        return true;
    }
};