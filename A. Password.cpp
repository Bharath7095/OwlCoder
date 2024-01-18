//codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>vt(n,0);
	    for(int i=0;i<n;i++) cin>>vt[i];
	    int a=1;
	    int s=10-n;
	    for(int i=s-2+1;i<s+1;i++){
	        a*=i;
	    }
	    a/=2;
	    cout<<a*6<<endl;
	}
}
