class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0; //net count not actual
        int ans=0;
        for(int i =0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];   //new canditate
            }
            if(ans==nums[i]){ //got supporter
                freq++;
            } else{
                freq--;        //oppose supporter cancel out each other
            }
        }
        return ans;
    }
};