class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            cout<<" ";
            
            char ch='A';
            for(int j=1;j<=i;j++)
            {
                cout<<ch;
                ch++;
            }
            
            ch=ch-2;
            while(ch>='A')
            {
                cout<<ch;
                ch--;
            }
            
            
            cout<<endl;
        }
    }
};