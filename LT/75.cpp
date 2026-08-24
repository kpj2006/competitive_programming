class Solution {
public:
    void sortColors(vector<int>& nums) {
        int* l = &nums[0], * h = &nums[nums.size()-1] ,* m = &nums[0];
        while (m <= h){
            if(*m ==0){
                swap(*l,*m);
                l++;
                m++;
            }
            else if(*m==1){
                m++;
            }
            else{
                swap(*m,*h);
                h--;
            }
        }

        return;
    }
};