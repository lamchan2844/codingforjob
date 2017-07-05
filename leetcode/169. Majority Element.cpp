class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mymap;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(mymap.find(nums[i])==mymap.end())
            {
                mymap.insert(pair<int,int>(nums[i],1));
            }
            else{
                mymap[nums[i]]+=1;
            }
        }
        for(int i=0;i<size;i++)
        {
            cout<<mymap[nums[i]]<<endl;
            if(mymap[nums[i]]>(size/2))
                return nums[i];
        }
        
    }
};
