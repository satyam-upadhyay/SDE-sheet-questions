class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cnt0++;
            else if(nums[i]==1)
                cnt1++;
        }
        //cout<<cnt0<<" "<<cnt1;
        int temp=nums.size()-cnt0-cnt1;
        int i=0;
        for(int i=0;i<nums.size();i++){
            if(cnt0--)
                nums[i]=0;
            else if(cnt1--)
               { nums[i]=1; cnt0=0;}
            else
                {nums[i]=2; cnt1=0; cnt0=0;}
        }
    }
};