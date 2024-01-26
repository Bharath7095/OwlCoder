#include <bits/stdc++.h>
using namespace std;

void PrintPermutaion(string s,vector<int>&freq,string ans){
    if(ans.size()==s.size()){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(freq[i]==0){
            freq[i]=1;
            PrintPermutaion(s,freq,ans+s[i]);
            freq[i]=0;
        }
    }
    
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>freq(n,0);
	PrintPermutaion(s,freq,"");
}
