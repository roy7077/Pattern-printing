class Solution{
public:
	
	void printTriangle(int n) {
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=(n-i+1);j++)
	        cout<<"*"<<" ";
	        cout<<endl;
	    }
	}
};