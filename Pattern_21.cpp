class Solution {
  public:
    void printSquare(int n) {
        
        for(int i=1;i<=n;i++)
        {
            if(i==1 or i==n)
            {
                for(int j=1;j<=n;j++)
                cout<<"*";
                cout<<endl;
            }else
            {
               for(int j=1;j<=n;j++)
               {
                   if(j==1 or j==n)
                   cout<<"*";
                   else
                   cout<<" ";
               }
               cout<<endl;
            }
        }
    }
};