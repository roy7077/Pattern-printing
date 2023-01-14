class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i=1;i<=n;i++)
        {
            //for left part
            for(int j=1;j<=i;j++)
            cout<<j<<" ";
            
            for(int j=1;j<=n-i;j++)
            cout<<" "<<" ";
            
            //for right part
            for(int j=1;j<=n-i;j++)
            cout<<" "<<" ";
            
            for(int j=i;j>=1;j--)
            cout<<j<<" ";
            
            cout<<endl;
        }
    }
};