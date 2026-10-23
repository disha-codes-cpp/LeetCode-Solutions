class Solution {
public:
bool isValid(vector<int>& p, int m,int minMF){
    int balls=1;
    int lastPosition=p[0];
      for(int i=1;i<p.size();i++){
          if(p[i]-lastPosition>=minMF){
            balls++;
            lastPosition=p[i];
          }
          if(balls == m){
            return true;
          }
      }
      return false;
}
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        int n=p.size();
        int st=1;
        int ans=0;
        int end=p[n-1]-p[0];
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(p,m,mid)){
             ans=mid;
             st=mid+1;
            } else{
                end=mid-1;
            }
        }
        return ans;
    }
};