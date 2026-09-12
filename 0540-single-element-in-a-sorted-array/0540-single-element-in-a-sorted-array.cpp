class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n=A.size();
        int st=0;
        int end=n-1;
        if(n==1){
           return A[0];
        }
         while(st<=end){
            int mid=st+(end-st)/2;
            if(mid==0 && A[mid]!=A[1]){  // A[mid]==0
                return A[mid];
            }
            if(mid==n-1 && A[mid]!=A[n-2]){  //A[mid]=n-1
                     return A[mid];
            }
            if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]){
                return A[mid];
            } else if(mid%2==0){  // even
                 if(A[mid]==A[mid-1]){  //l
                    end=mid-2;
                 } else {
                    st=mid+2;  //r
                 }
            } else{  //odd
              if(A[mid]==A[mid-1]){  //l
                st=mid+1;
              } else{  //r
                end=end-1;
              }
            }
         }
         return -1;
    }
};