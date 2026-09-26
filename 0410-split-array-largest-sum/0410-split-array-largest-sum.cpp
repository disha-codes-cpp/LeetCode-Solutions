class Solution {
public:
bool isValid(vector<int>& nums, int k,int possLarSubarr){
    int subArr=nums[0];
    int arrSplitLen=1;
    for(int i=1;i<nums.size();i++){
        if(subArr+nums[i]<=possLarSubarr){
            subArr+=nums[i];
        } else{
            arrSplitLen++;
            subArr=nums[i];
        }
    }
  return arrSplitLen > k ? false : true;
}
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int st=*max_element(nums.begin(),nums.end());
        int end=sum;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,k,mid)){  //l
                ans=mid;
                end=mid-1;
            } else{       //r
                st=mid+1;
            }
        }
        return ans;
    }
};