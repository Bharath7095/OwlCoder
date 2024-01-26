#include <bits/stdc++.h>
using namespace std;

void CombinationSum(int ind,int n,int arr[],int k,vector<int>&ds)
{
    if(ind==n){
        if(k==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    //recursive case
    //pick
    if(arr[ind]<=k){
        ds.push_back(arr[ind]);
        CombinationSum(ind,n,arr,k-arr[ind],ds);
        ds.pop_back();
    }
    CombinationSum(ind+1,n,arr,k,ds);
}
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int>ds;
	CombinationSum(0,n,arr,k,ds);
}
