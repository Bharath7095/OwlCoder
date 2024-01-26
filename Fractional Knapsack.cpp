//gfg potd
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double ans=0;
        priority_queue<pair<double,int>>q;
        for(int i=0;i<n;i++){
            double x=(arr[i].value*1.0)/arr[i].weight;
            q.push({x,i});
        }
        while(!q.empty()){
            int a=q.top().first;
            int b=q.top().second;
            q.pop();
            if(arr[b].weight<=W){
                ans+=arr[b].value;
                W-=arr[b].weight;
            }
            else{
                double z=(W*1.0)/arr[b].weight;
                ans+=((arr[b].value)*z);
                W=0;
                break;
            }
        }
        return ans;
    }
        
};
