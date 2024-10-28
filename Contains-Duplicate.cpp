class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> solset;
        for(auto num: nums){
            solset.insert(num);
        }
        
        if(solset.size() == nums.size())
            return false;
        else
            return true;
    }
};