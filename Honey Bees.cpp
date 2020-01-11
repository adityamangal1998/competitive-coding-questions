//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/honey-bees/
#include <iostream>
 
using namespace std;
 
int main() {
	int testcases;
	cin >> testcases;										// Reading input from STDIN
	while(testcases--)
	{
	    int n,m;
	    cin >> n >> m;
	    int mat[n][m];
	    for(auto i=0;i<n;++i)
	    {
	        for(auto j=0;j<m;++j)
	        {
	            cin >> mat[i][j];
	        }
	    }
	    int q,t,x,y;
	    cin >> q;
	    while(q--)
	    {
	        cin >> t >> x >> y;
	        int sum=0;
	        if(t==1)
	        {
	            if(y%2==1)
	            {
    	            if(x-1>=0)
    	            {
    	                sum+=mat[x-1][y];
    	                //cout << x-1 << " " << y << "\n";
    	            }
    	            if(y-1>=0)
    	            {
    	                sum+=mat[x][y-1];
    	                //cout << x << " " << y-1 << "\n";
    	            }
    	            if(y+1<m)
    	            {
    	                sum+=mat[x][y+1];
    	                //cout << x << " " << y+1 << "\n";
    	            }
    	            if(x+1<n&&y+1<m)
                    {
                        sum+=mat[x+1][y+1];
    	                //cout << x+1 << " " << y+1 << "\n";
                    }
    	            if(x+1<n)
    	            {
    	                sum+=mat[x+1][y];
    	                //cout << x+1 << " " << y << "\n";
    	            }
    	            if(x+1<n&&y-1>=0)
    	            {
    	                sum+=mat[x+1][y-1];
    	            }
    	            cout << sum << "\n";
	            }
	            else
	            {
	                if(x-1>=0&&y-1>=0)
	                {
	                    sum+=mat[x-1][y-1];
	                }
	                if(x-1>=0)
	                {
	                    sum+=mat[x-1][y];
	                }
	                if(x-1>=0&&y+1<m)
	                {
	                    sum+=mat[x-1][y+1];
	                }
	                if(y-1>=0)
	                {
	                    sum+=mat[x][y-1];
	                }
	                if(y+1<m)
	                {
	                    sum+=mat[x][y+1];
	                }
	                if(x+1<n)
	                {
	                    sum+=mat[x+1][y];
	                }
	                cout << sum << "\n";
	            }
	        }
	        else
	        {
	            if(y%2==1)
	            {
	                if(x-2>=0)
    	            {
    	                sum+=mat[x-2][y];
    	            }
    	            if(x-1>=0&&y-2>=0)
    	            {
    	                sum+=mat[x-1][y-2];
    	            }
    	            if(x-1>=0&&y-1>=0)
    	            {
    	                sum+=mat[x-1][y-1];
    	            }
    	            if(x-1>=0&&y+1<m)
    	            {
    	                sum+=mat[x-1][y+1];
    	            }
    	            if(x-1>=0&&y+2<m)
    	            {
    	                sum+=mat[x-1][y+2];
    	            }
    	            if(y-2>=0)
    	            {
    	                sum+=mat[x][y-2];
    	            }
    	            if(y+2<m)
    	            {
    	                sum+=mat[x][y+2];
    	            }
    	            if(x+1<n&&y-2>=0)
    	            {
    	                sum+=mat[x+1][y-2];
    	            }
    	            if(x+1<n&&y+2<m)
    	            {
    	                sum+=mat[x+1][y+2];
    	            }
    	            if(x+2<n&&y-1>=0)
    	            {
    	                sum+=mat[x+2][y-1];
    	            }
    	            if(x+2<n)
    	            {
    	                sum+=mat[x+2][y];
    	            }
    	            if(x+2<n&&y+1<m)
    	            {
    	                sum+=mat[x+2][y+1];
    	            }
    	            cout << sum << "\n";
	            }
	            else
	            {
	                if(x-2>=0)
	                {
	                    sum+=mat[x-2][y];
	                }
	                if(x-2>=0&&y-1>=0)
	                {
	                    sum+=mat[x-2][y-1];
	                }
	                if(x-2>=0&&y+1<m)
	                {
	                    sum+=mat[x-2][y+1];
	                }
	                if(x-1>=0&&y-2>=0)
	                {
	                    sum+=mat[x-1][y-2];
	                }
	                if(x-1>=0&&y+2<m)
	                {
	                    sum+=mat[x-1][y+2];
	                }
	                if(y-2>=0)
	                {
	                    sum+=mat[x][y-2];
	                }
	                if(y+2<m)
	                {
	                    sum+=mat[x][y+2];
	                }
	                if(x+1<n&&y-2>=0)
	                {
	                    sum+=mat[x+1][y-2];
	                }
	                if(x+1<n&&y-1>=0)
	                {
	                    sum+=mat[x+1][y-1];
	                }
	                if(x+1<n&&y+1<m)
	                {
	                    sum+=mat[x+1][y+1];
	                }
	                if(x+1<n&&y+2<m)
	                {
	                    sum+=mat[x+1][y+2];
	                }
	                if(x+2<n)
	                {
	                    sum+=mat[x+2][y];
	                }
	                cout << sum << "\n";
	            }
	        }
	    }
	}
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
