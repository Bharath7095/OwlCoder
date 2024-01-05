long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int val=0,temp=0,l=0;
        for(long long int i=0;i<k;i++)
        {
            val+=a[i];
            temp+=a[i];
        }
        long long ans=val;
        for(long long int i=k;i<n;i++)
        {
            val+=a[i];
            temp-=a[i-k];
            temp+=a[i];
            if(temp>val){
                while(i-l>=k){
                    val-=a[l];
                    l++;
                    ans=max(ans,val);
                }
            }
            ans=max(ans,val);
        }
        return ans;
    }
