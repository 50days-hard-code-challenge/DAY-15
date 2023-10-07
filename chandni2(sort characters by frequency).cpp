class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        vector<int>charcount(256,0);
        for(int i=0;i<n;i++){
            charcount[s[i]]++;
        }
        auto cmp = [&charcount](char a, char b) {
            return charcount[a] > charcount[b];
        };
        sort(s.begin(), s.end(), cmp);
        return s;
    }
};
    
