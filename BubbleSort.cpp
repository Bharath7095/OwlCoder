#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int i,int *arr,int n)
{
    if(n==1) return;
    if(i==n-1){
        BubbleSort(0,arr,n-1);
        return;
    }
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    BubbleSort(i+1,arr,n);
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	BubbleSort(0,arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
