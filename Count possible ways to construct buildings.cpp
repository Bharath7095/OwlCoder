int TotalWays(int N)
	{
	    // Code here
	    int a=2,b=3;
	    long long c=0;
	    int mod=1e9+7;
	    if(N==1) return a*a;
	    else if(N==2) return b*b;
	    for(int i=3;i<=N;i++)
	    {
	        c=a+b;
	        c=c%mod;
	        a=b;
	        b=c;
	    }
	    return (c*c)%mod;
	}
