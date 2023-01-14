class Solution{
public:
    void printTriangle(int n) {
        
        //for upper part of a pattern
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            cout<<"*"<<" ";
            cout<<endl;
        }
        
        //for lower part of a pattern
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=n-i+1;j++)
            cout<<"*"<<" ";
            cout<<endl;
        }
    }
};