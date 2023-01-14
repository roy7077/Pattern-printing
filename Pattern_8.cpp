class Solution{
public:
	
	void printTriangle(int n) {
	    
	    int limit=2*n-1;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=i-1;j++)
	        cout<<" ";
	        
	        for(int j=1;j<=limit;j++)
	        cout<<"*";
	        limit-=2;
	        cout<<endl;
	   }
	}
};