class Solution {
public:
    int titleToNumber(string s) {
        int column=0;
        for(int i=s.length()-1;i>=0;i--)
            {
                column+=pow(26,(s.length()-i-1))*(int(s[i])-64);
            }
            return column;
    }
};
