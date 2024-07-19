class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        int noOfOperations = 0;
        while(left < right){
            if(nums[left]+nums[right] == k){
                noOfOperations++;
                left++;
                right--;
            }else if(nums[left]+nums[right] > k){
                right--;
            }else{
                left++;
            }
        }
        return noOfOperations;
    }
};