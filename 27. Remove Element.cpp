/*
* @Author: Administrator
* @Date:   2017-02-17 21:45:27
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 22:01:39
* @score: solution1:54.56%;solution2:10.21%
* @Ps: solution2 by daxianji007's share
*/

class Solution {
public:

	int removeElement(vector<int>& nums, int val) {
		int last = nums.size();
		int i = 0;
		while(i<last){
			if (nums[i] == val){
				nums[i] = nums[--last];
			}else{
				i++;
			}
		}
		return last;
	}
    /*
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
    */
	
};