class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> freq;

        
        for(char ch : s) {
            freq[ch]++;
        }


        vector<pair<char, int>> v;

        for(auto it : freq) {
            v.push_back({it.first, it.second});
        }

        
        sort(v.begin(), v.end(), [](pair<char,int>& a, pair<char,int>& b) {
            return a.second > b.second;
        });

        string ans = "";

        
        for(auto it : v) {

            char ch = it.first;
            int count = it.second;

            while(count--) {
                ans += ch;
            }
        }

        return ans;
    }
};