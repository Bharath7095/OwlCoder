class Solution {
public:
    bitset<30>c,cl,cr;
    int t=0;
    void TotalQueens(int n,int row){
        if(row>=n){
            t++;
            return;
        }
        for(int i=0;i<n;i++){
            if(!c[i] and !cr[row-i+n-1] and !cl[row+i]){
                c[i]=cr[row-i+n-1]=cl[row+i]=1;
                TotalQueens(n,row+1);
                c[i]=cr[row-i+n-1]=cl[row+i]=0;
            }
        }
    }
    int totalNQueens(int n) {
        TotalQueens(n,0);
        return t;
    }
};
