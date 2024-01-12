queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        queue<int>qu;
        int c=0;
        while(q.size()!=0)
        {
            if(c<k){
                st.push(q.front());
                q.pop();
                c++;
            }
            else break;
        }
        while(!st.empty())
        {
            qu.push(st.top());
            st.pop();
        }
        while(q.size()!=0){
            qu.push(q.front());
            q.pop();
        }
        return qu;
    }
