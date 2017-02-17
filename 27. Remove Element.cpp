/*
* @Author: Administrator
* @Date:   2017-02-17 21:45:27
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 21:46:40
* @Ps: Thank daxianji007's share
*/

class Solution {
public:

    int removeElement(vector<int>& nums, int val) {
        int flag = 0;
        for (int i= 0;i<nums.size();i++)
        {
            if (nums[i] != val){
                nums[flag++] = nums[i];
            }
        }
        return flag;
    }
    
};