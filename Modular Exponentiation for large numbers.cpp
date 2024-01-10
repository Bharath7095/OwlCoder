public:
		long long int PowMod(long long int x,long long int n,long long int m)
		{
		    // Code here
		    long long int ans=1;
		    while(n)
		    {
		        if(n&1){
		            n-=1;
		            ans=((ans%m)*(x%m))%m;
		        }
		        else{
		            n/=2;
		            x=((x%m)*(x%m))%m;
		        }
		    }
		    return ans;
		}
