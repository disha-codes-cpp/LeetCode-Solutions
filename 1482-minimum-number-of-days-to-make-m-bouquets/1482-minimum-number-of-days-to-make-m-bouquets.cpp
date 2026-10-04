class Solution {
public:
   bool isValid(vector<int>& bloomDay, int m, int k,int minDays){
    int bouquet=0; int flower=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=minDays){
            flower++;
            if(flower==k){
                flower=0;
                bouquet++;
            }
        } else{
            flower=0;
        }
    }
    return bouquet>=m ? true : false;
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()){
            return -1;
        }
        int maxValue=*max_element(bloomDay.begin(),bloomDay.end());
        int st=1;
        int end=maxValue;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }  else{
                st=mid+1;
            }
        }
        return ans;
    }
};