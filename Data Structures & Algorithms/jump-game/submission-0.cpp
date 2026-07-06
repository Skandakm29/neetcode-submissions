class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int jump=0;
        for(int i=0;i<n;i++){
            if(i>jump) return false;
            int j=i+nums[i];
            jump=max(jump,j);
        }
        return true;
    }
};
