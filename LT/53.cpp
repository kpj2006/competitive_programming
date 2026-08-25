class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int best=INT_MIN;
        for(int num:nums ){
            sum+=num;
            if(sum>best){
                best=sum;
            }
            if(sum<0) sum=0;
        }
        return best;
    }
};