/*
* @Author: chenlin
* @Date:   2017-02-17 21:11:15
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 21:12:13
* @score: 11.18%
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0;i<m;i++){
            nums1[m+n-i-1] = nums1[m-i-1];
        }
    	for (int i = 0, j = 0, k = n; j < n;){
    		if (nums2[j]<=nums1[k]||(m+n<=k)){
    			nums1[i++] = nums2[j++];
    		}
    		if (nums1[k]<nums2[j]&&(k<m+n)){
    			nums1[i++] = nums1[k++];
    		}
    	}
    }
};