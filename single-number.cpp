class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int value: nums){ //4,1,2,1,2
          ans=ans^value;
        }
        return ans;
    }
};