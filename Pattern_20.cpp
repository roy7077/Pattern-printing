class Solution {
  public:
    void printTriangle(int n) {
        
        //for upper part
        for(int i=1;i<=n;i++)
        {
            //left part
            for(int j=1;j<=i;j++)
            cout<<"*";
            
            for(int j=1;j<=n-i;j++)
            cout<<" ";
            
            //right part
            for(int j=1;j<=n-i;j++)
            cout<<" ";
            
            for(int j=1;j<=i;j++)
            cout<<"*";
            
            cout<<endl;
        }
        
        //for lower part
        for(int i=2;i<=n;i++)
        {
            //left part
            for(int j=1;j<=n-i+1;j++)
            cout<<"*";
            
            for(int j=1;j<=i-1;j++)
            cout<<" ";
            
            //right part
            for(int j=1;j<=i-1;j++)
            cout<<" ";
            
            for(int j=1;j<=n-i+1;j++)
            cout<<"*";
            
            cout<<endl;
        }
    }
};