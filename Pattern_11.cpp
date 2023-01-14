class Solution {
  public:
    void printTriangle(int n) {
        
        bool flag=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(flag)
                {
                    if(j&1)
                    cout<<"1"<<" ";
                    else
                    cout<<"0"<<" ";
                }else
                {
                    if(j%2==1)
                    cout<<"0"<<" ";
                    else
                    cout<<"1"<<" ";
                }
            }
            flag=(!flag);
            cout<<endl;
        }
    }
};