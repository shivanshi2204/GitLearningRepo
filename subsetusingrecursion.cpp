#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void powerSets(string,int, string);
vector<string> res;
vector<string> powerSet(string );
int main() {
    string s;
    cin>>s;
	res=powerSet(s);
	sort(res.begin(), res.end());
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	return 0;
//change
}
void powerSets(string str, int index , 
              string curr) 
{ 
    if (index == str.length()) { 
        res.push_back(curr); 
        return; 
    } 
    powerSets(str, index + 1, curr + str[index]); 
    powerSets(str, index + 1, curr); 
} 
vector <string> powerSet(string s)
{
    string p="";
    powerSets(s, 0,p);
    return res;
   //Your code here
}
