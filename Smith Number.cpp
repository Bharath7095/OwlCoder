typedef long long ll;
ll num=1e6+1;
vector<ll> v(num,1);
vector<ll> primes;
class Solution {
  public:
    void seive(){
        v[0]=v[1]=0;
        if(v[4]==2) return;
        for(ll i=2;i<=num;i++){
            if(v[i]==1){
                v[i]=i;
                for(ll j=2*i;j<=num;j+=i) v[j]=i;
            }
        }
        for(ll i=2;i<=num;i++){
            if(v[i]==i) primes.push_back(i);
        }
    }
    int smithNum(int n){
        seive();
        if(n<1e6+1 and v[n]==n) return 0;
        int s=0,x=n;
        while(x!=0){
            s+=(x%10);
            x/=10;
        }
        int su=0,k=n;
        for(ll i=0;i<primes.size();i++)
        {
            if(primes[i]>k/2) break;
            if(n<1e6+1 and v[n]==n){
                x=n;
                while(x!=0){
                    su+=(x%10);
                    x/=10;
                }
                break;
            }
            while(n%primes[i]==0){
                x=primes[i];
                while(x!=0){
                    su+=(x%10);
                    x/=10;
                }
                n/=primes[i];
            }
        }
        if(s==su) return 1;
        return 0;
    }
};
