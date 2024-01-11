vector<long long> onlyprimes;
    void sieve(long long primes[]){
        if(primes[4]==0) return;
        for(long long i=2;i<=1e6;i++){
            if(primes[i]==1){
                for(long long j=i*i;j<=1e6;j+=i) primes[j]=0;
            }
        }
        for(int i=2;i<=1e6;i++){
            if(primes[i]==1) onlyprimes.push_back(i);
        }
    }
    void vsk(long long arr[],long long l,long long r,long long n,long long sq){
        for(long long i=0;i<=sq;i++){
            long long x=l/onlyprimes[i];
            x=onlyprimes[i]*x;
            if(x<l) x+=onlyprimes[i];
            x=max(x,onlyprimes[i]*onlyprimes[i]);
            for(long long j=x;j<=r;j+=onlyprimes[i]){
                arr[j-l]=0;
            }
        }
    }
    long long primeProduct(long long l, long long r){
        long long ans=1,m=1e9+7,sq=sqrt(r);
        long long primes[1000001];
        for(long long i=0;i<=1e6;i++) primes[i]=1;
        primes[0]=primes[1]=0;
        sieve(primes);
        long long arr[(r-l)+1];
        for(long long i=0;i<=(r-l);i++) arr[i]=1;
        vsk(arr,l,r,(r-l)+1,sq);
        for(long long i=0;i<=(r-l);i++){
            if(arr[i]==1) ans=(ans*(i+l))%m;
        }
        return ans;
    }
