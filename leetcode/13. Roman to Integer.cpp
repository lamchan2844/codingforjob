#include<iostream>
#include<string>
#include<map>
using namespace std;
int romanToInt(string s) {
	map<char,int> mymap;
	mymap.insert(pair<char,int>('I',1));
	mymap.insert(pair<char,int>('V',2));
	mymap.insert(pair<char,int>('X',3));
	mymap.insert(pair<char,int>('L',4));
	mymap.insert(pair<char,int>('C',5));
	mymap.insert(pair<char,int>('D',6));
	mymap.insert(pair<char,int>('M',7));
        int sum=0;
        for(int i=0;i<s.length()-1;i++)
        {
			if(mymap[s[i]]<mymap[s[i+1]])
			{
				switch (s[i]){
                case 'I':sum-=1;
                    break;
                case 'V':sum-=5;
                    break;
                case 'X':sum-=10;
                    break;
                case 'L':sum-=50;
                    break;
                case 'C':sum-=100;
                    break;
                case 'D':sum-=500;
                    break;
                case 'M':sum-=1000;
                    break;
            }
			}
			else{
				switch (s[i]){
                case 'I':sum+=1;
                    break;
                case 'V':sum+=5;
                    break;
                case 'X':sum+=10;
                    break;
                case 'L':sum+=50;
                    break;
                case 'C':sum+=100;
                    break;
                case 'D':sum+=500;
                    break;
                case 'M':sum+=1000;
                    break;
			}
        }
			
		}
		switch (s[s.length()-1]){
                case 'I':sum+=1;
                    break;
                case 'V':sum+=5;
                    break;
                case 'X':sum+=10;
                    break;
                case 'L':sum+=50;
                    break;
                case 'C':sum+=100;
                    break;
                case 'D':sum+=500;
                    break;
                case 'M':sum+=1000;
                    break;
			}
        return sum;
    }
void main()
{
	cout<<romanToInt("DCXXI")<<endl;
	while(1);
}
