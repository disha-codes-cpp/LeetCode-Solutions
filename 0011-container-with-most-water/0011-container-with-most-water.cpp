class Solution {
public:
    int maxArea(vector<int>& height) {        //two pointer approach
        int maxWater=0;
        int startLeft=0;  //l.h.s
        int lastRight=height.size()-1;  //r.h.s
        while(startLeft < lastRight){
            int width = lastRight - startLeft;   // assuming width = 1 unit each
             int ht=min(height[startLeft],height[lastRight]);
             int currWater=width*ht;
             maxWater=max(maxWater,currWater);

             height[startLeft]<height[lastRight] ? startLeft++ : lastRight--;
        } 
        return maxWater;
    }
};