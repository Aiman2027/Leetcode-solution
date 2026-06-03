class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea =0;
        int l =0;
        int r = height.size() -1;
        while(l <= r){
            int h = min(height[l] , height[r]);
            int w = r - l;
            int area = h * w;
             maxarea = max(area , maxarea);
            if(height[l] <=  height[r] ){
                l++;
            }
            else{
                r--;
            }
            
}
      return maxarea;  
    }
};