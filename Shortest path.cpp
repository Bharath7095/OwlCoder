#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int c1=0;
    for(int i=0;i<32;i++)
    {
        if((a&(1<<i))!=(b&(1<<i))) c1++;
    }
    if(c1==0 || c1%2!=0){
        cout<<-1;
    }
    else{
        cout<<c1/2;
    }
}
