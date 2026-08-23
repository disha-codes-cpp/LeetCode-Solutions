class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        bool visited[51]={false};   //false at starting
        for(int i =0;i<nums.size();i++){
            if(visited[nums[i]]){
                ans^=nums[i]; //n^0=n 
            }
            else{
                visited[nums[i]]=true;
            }

        }
        return ans;
    }
};