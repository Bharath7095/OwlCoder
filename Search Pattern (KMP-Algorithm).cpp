public:
        vector <int> search(string pat, string txt)
        {
            //code here
            vector<int>vt;
            int c=-1;
            int k=pat.size();
            for(int i=0;i<txt.size()-k+1;i++)
            {
                c=-1;
                int q=0;
                for(int j=i;j<i+k;j++)
                {
                    if(txt[j]==pat[q++])
                    {
                        if(c==-1)
                        {
                            c=i+1;
                        }
                    }
                    else{
                        c=-1;
                        break;
                    }
                }
                if(c!=-1) vt.push_back(c);
            }
            if(vt.size()!=0) return vt;
            return {};
        }
     
