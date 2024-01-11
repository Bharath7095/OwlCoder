#include <bits/stdc++.h>
using namespace std;
vector<int>prime(1e6+1,1);
vector<int>vt;
void seive(int n)
{
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=0;
            }
            if(i!=2) vt.push_back(i);
        }
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    seive(n);
	    int c=0;
	    for(int i=0;i<vt.size();i++)
	    {
	        if(prime[vt[i]-2]==1) c++;
	    }
	    cout<<c<<endl;
	}
}
