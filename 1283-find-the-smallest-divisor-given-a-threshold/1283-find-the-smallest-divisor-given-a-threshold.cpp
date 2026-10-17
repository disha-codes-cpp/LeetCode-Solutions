class Solution {
public:
bool isValid(vector<int>& nums, int th,int spd){
      int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=(nums[i]+spd-1)/spd;
    }
    return sum <= th;
}
    int smallestDivisor(vector<int>& nums, int th) {
        int maxValue=*max_element(nums.begin(),nums.end());
        int st=1;
        int end=maxValue;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,th,mid)){
                ans=mid;
                end=mid-1;
            } else { 
                st=mid+1;
            }
        }
        return ans;
    }
};