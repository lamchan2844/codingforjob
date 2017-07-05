class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
    else
    {
		map<char,int> mymap_t;
		map<char,int> mymap_s;
		for(int i=0;i<t.length();i++)
		{
			if(mymap_t.find(t[i])==mymap_t.end())
				mymap_t.insert(pair<char,int>(t[i],1));
			else
				mymap_t[t[i]]++;
		}
		for(int i=0;i<s.length();i++)
		{
			if(mymap_s.find(s[i])==mymap_s.end())
				mymap_s.insert(pair<char,int>(s[i],1));
			else
				mymap_s[s[i]]++;
		}
		if(mymap_s.size()!=mymap_t.size())
			return false;
		else{
			map<char,int>::iterator iter_s;
			map<char,int>::iterator iter_t;
			iter_s=mymap_s.begin();
			int i=0;
			for(iter_s;iter_s!=mymap_s.end();iter_s++)
			{
				if(mymap_t.find(s[i])==mymap_t.end()){
					return false;
				}
				else{
					if(mymap_s[s[i]]!=mymap_t[s[i]])
						return false;
				}
				i++;
			}
			return true;
		}
		
   }
    }
};
