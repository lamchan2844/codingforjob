/*
* @Author: chenlin
* @Date:   2017-02-17 11:20:29
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 11:21:11
*/

void myMergeSort(vector<int>& nums, int lo, int hi){
	if (hi-lo<2)
		return;
	int mi = (lo+hi)>>1;
	myMergeSort(nums, lo,mi);
	myMergeSort(nums, mi, hi);
	merge(nums, lo, mi, hi);

}
void merge(vector<int>& nums, int lo, int mi, int hi){
	int lb = mi - lo;
	int lc = hi - mi;
	int *B = new int[lb];
	for(int i = 0;i<lb;i++){
		B[i] = nums[lo+i];
	}
	for (int i = 0, j = 0, k = 0; j < lb;){
		if (B[j]<=nums[mi+k]||(lc<=k)){
			nums[lo+i++] = B[j++];
		}
		if (nums[mi+k]<B[j]&&(k<lc)){
			nums[lo+i++] = nums[mi+k++];
		}
	}
	delete []B;
}