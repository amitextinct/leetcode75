class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum =0;
        for(int i =0;i<k;i++)
            maxSum = maxSum + nums[i];
        int left = 0;
        int sum = maxSum;
        int right = k;
        while(right < nums.size()){
            sum  = sum - nums[left];
            left++;
            sum = sum + nums[right];
            right++;
            maxSum = max(sum,maxSum);
        }
        return (double)maxSum/k;
    }
};