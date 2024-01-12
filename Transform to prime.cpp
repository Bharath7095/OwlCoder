//gfg
int n=1000001;
vector<int>vt(n,1);
class Solution
{
    public:
    void seive(){
        vt[0]=0;
        vt[1]=0;
        if(vt[4]==0) return;
        for(int i=2;i*i<=n;i++)
        {
            if(vt[i]==1){
                for(int j=2*i;j<=n;j+=i){
                    vt[j]=0;
                }
            }
        }
    }
    int minNumber(int arr[],int N)
    {
        seive();
        int s=0;
        for(int i=0;i<N;i++)
        {
            s+=arr[i];
        }
        for(int i=s;i<=n;i++)
        {
            if(vt[i]==1){
                return (i-s);
            }
        }
    }
};
