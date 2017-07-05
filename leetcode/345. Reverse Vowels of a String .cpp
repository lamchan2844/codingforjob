/*

* @Author: chenlin

* @Date:   2017-02-17 20:46:52

* @Last Modified by:   chenlin

* @Last Modified time: 2017-02-17 20:49:00

* @score: 2.40%

* @ps: need to be improved

*/
class Solution {
public:
    string swapChar(string s, int lo, int hi){
        char tmp = s[lo];
        s[lo] = s[hi];
        s[hi] = tmp;
        return s;
    }
    
    char Vowel[5] = {'a','e','i','o','u'};
    
    bool isVowel(char c){
        switch(tolower(c)){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
        for(int i= 0;i<5;i++){
            if (tolower(c) == Vowel[i])
                return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        
        int lo = -1,hi = s.length();
        while(lo<hi){
            if(isVowel(s[++lo])){
                while(lo<hi&&!isVowel(s[--hi]));
                s = swapChar(s,lo,hi);
                
            }
        }
        return s;
        
        
    }
};