class Solution {
public:
bool isPossible(vector<int>& piles, int h,int maxSpeed){
    long long hours =0;
    for(int i=0;i<piles.size();i++){
        hours+=(piles[i]+maxSpeed-1)/maxSpeed;
    }
  return hours <= h ? true : false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxValue=*max_element(piles.begin(),piles.end());
        int st=1; int end=maxValue; int k=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isPossible(piles,h,mid)){
                k=mid;
                end=mid-1;
            } else{
                st=mid+1;
            }
        }
        return k;
    }
};