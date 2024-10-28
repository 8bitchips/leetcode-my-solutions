class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        for(auto x: s)
            freq[x]++;
        for(auto y: t)
            freq[y]--;

        for(auto z: freq)
            if(z.second !=0)
                return false;
        return true;
    
    }   
       
};