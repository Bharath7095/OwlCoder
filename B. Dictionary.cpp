//codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a1,a2;
	    string s;
	    cin>>s;
	    a1=int(s[0])-int('a');
	    if(s[1]>s[0]){
	        a2=int(s[1]-'a')-1;
	    }
	    else a2=int(s[1]-'a');
	    int ans=a1*25+a2+1;
	    cout<<ans<<endl;
	}
}
