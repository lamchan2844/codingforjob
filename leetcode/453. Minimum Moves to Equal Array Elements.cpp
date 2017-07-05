/*
* @Author: Administrator
* @Date:   2017-02-17 11:44:03
* @Last Modified by:   Administrator
* @Last Modified time: 2017-02-17 11:46:27
*/

/*
* 排序方法：beats 20.50%
* 查找方法：beats 96.31%
*/
class Solution {
public:
    void printVector(vector<int>& nums, int lo = 0, int hi = -1){
        if (hi == -1)
            hi = nums.size();
        for (int i=lo; i<hi; i++)
            cout<<nums[i]<<"    ";
        cout<<endl;
    }
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
    int findMin(vector<int>& nums, int lo, int hi){
        int min = nums[lo];
        for (int i = lo+1; i<hi; i++){
            if (nums[i]<min)
                min = nums[i];
        }
        return min;
    }
    int minMoves(vector<int>& nums) {
        /*
        myMergeSort(nums,0,nums.size());
        int moves = 0;
        for(int i = 1;i<nums.size();moves += nums[i++]- nums[0]);
        return moves;
        */
        
        int moves = 0;
        int min = findMin(nums, 0, nums.size());
        for (int i= 0;i<nums.size();i++){
            moves += nums[i] - min;
        }
        return moves;
    }
    
};
