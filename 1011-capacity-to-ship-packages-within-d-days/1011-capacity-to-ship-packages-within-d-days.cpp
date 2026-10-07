class Solution {
public:
bool isPossible(vector<int>& weights, int days,int minCap){
    int d=1; int packages=0;
    for(int i=0;i<weights.size();i++){
        if(packages+weights[i]<=minCap){
            packages+=weights[i];
        } else {
            d++;
            packages=weights[i];
        }
        }
        return d<=days ? true : false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxValue=*max_element(weights.begin(),weights.end());
        int st=maxValue;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int end=sum;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isPossible(weights,days,mid)){
                ans=mid;
                end=mid-1;
            }  else{
                st=mid+1;
            }
   }
   return ans;
    }
};