class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0;
        int j = height.size()-1;

        int maxarea = INT_MIN;
        int h = 1;
        int w = 1;


        while(i < j){
            h = min(height[i] , height[j]);
            w = j -i;
            maxarea = max( maxarea, w *h);
            if(height[i] <= height[j]){
                i++;
                }
                else{
                    j--;
                }
        }

       return  maxarea;
}
};